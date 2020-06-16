#include "TaskSummary.h"
#include "ui_TaskSummary.h"

TaskSummary::TaskSummary(QWidget *parent)
   : QWidget(parent)
   , ui(new Ui::TaskSummary)
{
   ui->setupUi(this);
}

TaskSummary::~TaskSummary() { delete ui; }

const QPushButton *TaskSummary::getYes() const { return ui->yesButton; }
