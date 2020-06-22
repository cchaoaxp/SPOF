#include "UpdateTimeAppLib.h"
#include <QApplication>

UpdateTimeAppLib::UpdateTimeAppLib()
{
   taskSummary   = nullptr;
   dataSelection = nullptr;
   current       = nullptr;
}

void UpdateTimeAppLib::start()
{
   taskSummary = new TaskSummary();
   QObject::connect( taskSummary->getYes(), &QPushButton::clicked, this,
                     &UpdateTimeAppLib::showDataSelection );
   showNext( taskSummary );
}

const TaskSummary *UpdateTimeAppLib::getTaskSummary() const
{
    return taskSummary;
}

void UpdateTimeAppLib::showDataSelection()
{
   dataSelection = new SelectionItems();
   QObject::connect( dataSelection->getOk(), &QPushButton::clicked, this,
                     &UpdateTimeAppLib::showCutomizeCalendar );
   showNext( dataSelection );
}

void UpdateTimeAppLib::showCutomizeCalendar()
{
   QDate minDate;
   minDate.setDate( 1900, 1, 1 );
   calendar = new CutomizeCalendar();
   //   calendar = new CutomizeCalendar(nullptr, &minDate, nullptr);
   QObject::connect( calendar->getOk(), &QPushButton::clicked, this,
                     &UpdateTimeAppLib::showListWidgets );
   showNext( calendar );
}

void UpdateTimeAppLib::showListWidgets()
{
   widgetsView = new WidgetsView();
   QObject::connect( widgetsView->getOk(), &QPushButton::clicked,
                     QApplication::instance(), QApplication::quit );
   showNext( widgetsView );
}

void UpdateTimeAppLib::showNext( QWidget *w )
{
   Qt::WindowFlags flags;
   flags = Qt::Window | Qt::FramelessWindowHint;
   if ( current != nullptr )
   {
      current->hide();
      current = w;
      current->setWindowFlags( flags );
      current->show();
   }
   else
   {
      current = w;
      current->setWindowFlags( flags );
      current->show();
   }
}
