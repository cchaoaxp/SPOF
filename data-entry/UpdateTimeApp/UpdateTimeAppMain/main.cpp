#include <QApplication>
#include <UpdateTimeAppLib.h>

int main( int argc, char *argv[] )
{
   QApplication a( argc, argv );

   UpdateTimeAppLib c;
   c.start();
   return QApplication::exec();
}
