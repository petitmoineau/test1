#pragma once
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

class GaussianCurveBlur
{
public:
	GaussianCurveBlur(const std::string&);

	void setPath(const std::string&);
	void setBlurLevel();
	Mat blurredImage;

private:
	Mat origin;
	Size kernelSize;
};