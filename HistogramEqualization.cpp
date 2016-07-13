//
//  HistogramEqualization.cpp
//  opencvtest
//
//  Created by 五零 on 16/7/13.
//  Copyright © 2016年 五零. All rights reserved.
//

#include "HistogramEqualization.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;



HistogramEqualization::HistogramEqualization(int){
    
    Mat img = imread("/Users/superstarwulin/Sites/xcode/helloworld/opencvtest/assets/zzx.jpg", CV_LOAD_IMAGE_COLOR); //open and read the image
    
    if (img.empty()) //if unsuccessful, exit the program
    {
        cout << "Image cannot be loaded..!!" << endl;
        return ;
    }
    
    vector<Mat> channels;
    Mat img_hist_equalized;
    
    cvtColor(img, img_hist_equalized, CV_BGR2YCrCb); //change the color image from BGR to YCrCb format
    
    split(img_hist_equalized,channels); //split the image into channels
    
    equalizeHist(channels[0], channels[0]); //equalize histogram on the 1st channel (Y)
    
    merge(channels,img_hist_equalized); //merge 3 channels including the modified 1st channel into one image
    
    cvtColor(img_hist_equalized, img_hist_equalized, CV_YCrCb2BGR); //change the color image from YCrCb to BGR format (to display image properly)
    
    //create windows
    namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
    namedWindow("Histogram Equalized", CV_WINDOW_AUTOSIZE);
    
    //show the image
    imshow("Original Image", img);
    imshow("Histogram Equalized", img_hist_equalized);
    
    waitKey(0); //wait for key press
    
    destroyAllWindows(); //destroy all open windows
    return;
}