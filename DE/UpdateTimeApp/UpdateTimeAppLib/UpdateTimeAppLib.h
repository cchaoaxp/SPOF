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
   TaskSummary *taskSummary;
   SelectionItems *dataSelection;
   CutomizeCalendar *calendar;
   WidgetsView *widgetsView;

   public:
   UpdateTimeAppLib();
   void start();
   void showNext( QWidget *w );

   public slots:

   void showDataSelection();
   void showCutomizeCalendar();
   void showListWidgets();

   private:
   QWidget *current;
};

#endif// UPDATETIMEAPPLIB_H
