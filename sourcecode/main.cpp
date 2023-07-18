#include <iostream>
#include "producerconsumerusingcondvar.h"
#include "producerconsumerusingcountingsemaphore.h"

using namespace std;
using namespace producerConsumerCondVar;
//using namespace producerConsumerCountingSemaphore; available at C++20

int main()
{
    //testCountingSemaphore(); available at C++20
    testProducerConsumerCondVar();
    return 0;
}