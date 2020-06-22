#include <QtTest>
#include <QApplication>
#include <TaskSummary.h>
#include <UpdateTimeAppLib.h>
#include "updateTimeTst.h"

// add necessary includes here

updateTimeTst::updateTimeTst()
{
    waitFlag = false;
}

updateTimeTst::~updateTimeTst()
{

}

void updateTimeTst::wait(bool flag)
{
    waitFlag = flag;
}

void updateTimeTst::testGreenGo()
{
    UpdateTimeAppLib test;
    QVERIFY2(test.taskSummary == nullptr, "Expect tasksummary is not initializing.");
    test.start();
    QVERIFY2(test.taskSummary != nullptr, "Expect tasksummary is initialized.");
    QVERIFY2(test.taskSummary->isVisible(), "Expected task summary is displayed");

    if(waitFlag ){
        QTest::qWait(2000);
    }
}

int main( int argc, char *argv[] )
{
   QApplication app( argc, argv );

   QStringList argList = app.arguments();

   int index = argList.indexOf( QRegularExpression( "-wait" ) );

   updateTimeTst test;

   if ( index >= 0 )
   {
      argList.removeAt( index );
      test.wait(true);

   }

   int result = QTest::qExec( &test, argList );
   return result;
}

/*QTEST_MAIN(updateTimeTst)*/

//#include "updateTimeTst.moc"
