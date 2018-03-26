#include <iostream>
#include <math.h>
#include "TutorialConfig.h" // NOTE: 我们只创建了"TutorialConfig.h.in","TutorialConfig.h"是其自动生成的

using namespace std;

int main(int argc, char *argv[]) {
    fprintf(stdout, "\n%s, Version %d.%d\n\n",
    argv[0],
    Tutorial_VERSION_MAJOR,
    Tutorial_VERSION_MINOR);

    double inputValue = atof("10.0");
    double outputValue = sqrt(inputValue);
    fprintf(stdout,"The square root of %g is %g\n",
            inputValue, outputValue);
    return 0;
}