#pragma once
#include "Polygon.h"
class Enegon:  public Polygon{
	private:
		int apotema;
		int site;
	public:
		Enegon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();
};

