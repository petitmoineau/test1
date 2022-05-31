#include "BlurLib.h"

GaussianCurveBlur::GaussianCurveBlur(const std::string& filepath)
	: origin(imread(filepath))
{}

void GaussianCurveBlur::setPath(const std::string& filepath)
{
	this->origin = imread(filepath);
}

void GaussianCurveBlur::setBlurLevel()
{
}
