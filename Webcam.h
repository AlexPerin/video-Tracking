#ifndef WEBCAM_H_INCLUDED
#define WEBCAM_H_INCLUDED

class Webcam
{
    public:
        Webcam();
        ~Webcam();
        int initWindow(const char *);
        int binairisation();
        CvPoint calculBarycentre();
        int tracking(CvPoint x);

    private:
        char key;
        const char *windowName1;
        const char *windowName2;
        IplImage *image;
        CvCapture *capture;
        IplImage *hsv;
        IplImage *mask;
        CvScalar pixel;
        IplConvKernel * kernel;
        int h, s, v, tolerance;
        int event;
        int x,y, ds, dh;
        int sommeX,sommeY;
        int nbPixels;
        CvPoint positionObj;

};

#endif // WEBCAM_H_INCLUDED
