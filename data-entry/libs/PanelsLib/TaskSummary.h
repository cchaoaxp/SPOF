#ifndef TASKSUMMARY_H
#define TASKSUMMARY_H

#include <QPushButton>
#include <QWidget>

namespace Ui
{
   class TaskSummary;
}

class TaskSummary : public QWidget
{
   Q_OBJECT

   public:
   explicit TaskSummary(QWidget *parent = nullptr);
   ~TaskSummary();

   const QPushButton *getYes() const;

   private:
   Ui::TaskSummary *ui;
};

#endif   // TASKSUMMARY_H
