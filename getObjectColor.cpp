#include "commun.h"

/*
void getObjectColor(int event, int x, int y, int flags, void * param=NULL) {


    CvScalar pixel;
    IplImage *hsv;

    if (event==CV_EVENT_LBUTTONUP) {

     hsv= cvCloneImage(image);
     cvCvtColor(image,hsv,CV_BGR2HSV);

    //on obtient l'image en hsv
        pixel = cvGet2D(hsv, y, x);

    //change la valeur de du pixel tracké
        h=(int)pixel.val[0];
        s=(int)pixel.val[1];
        v=(int)pixel.val[2];

        cvReleaseImage(&hsv);
    }
}

*/
