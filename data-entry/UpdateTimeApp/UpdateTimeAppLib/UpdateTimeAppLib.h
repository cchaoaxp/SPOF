#ifndef UPDATETIMEAPPLIB_H
#define UPDATETIMEAPPLIB_H

#include <CutomizeCalendar.h>
#include <QObject>
#include <SelectionItems.h>
#include <TaskSummary.h>
#include <WidgetsView.h>

class UpdateTimeAppLib : public QObject
{
   Q_OBJECT
   public:
   UpdateTimeAppLib();
   void start();
   const TaskSummary* getTaskSummary() const;
   void showNext( QWidget *w );

   public slots:

   void showDataSelection();
   void showCutomizeCalendar();
   void showListWidgets();

   private:
   QWidget *current;
   TaskSummary *taskSummary;
   SelectionItems *dataSelection;
   CutomizeCalendar *calendar;
   WidgetsView *widgetsView;
};

#endif// UPDATETIMEAPPLIB_H
