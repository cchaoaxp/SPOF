#include <QtTest>
#include <QApplication>
#include <UpdateTimeAppLib.h>
#include <TaskSummary.h>

// add necessary includes here

class updateTimeTst : public QObject
{
    Q_OBJECT

public:
    updateTimeTst();
    ~updateTimeTst();
    void wait(bool flag);

private slots:
    void testGreenGo();

private:
    bool waitFlag;

};

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
    QVERIFY2(test.getTaskSummary() == nullptr, "Expect tasksummary is not initializing.");
    test.start();
    QVERIFY2(test.getTaskSummary() != nullptr, "Expect tasksummary is initialized.");
    QVERIFY2(test.getTaskSummary()->isVisible(), "Expected task summary is displayed");

    if(waitFlag ){
        QTest::qWait(1000);
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

#include "updateTimeTst.moc"
