//
// Created by Administrator on 2022/3/18.
//

#ifndef CPP__6_H
#define CPP__6_H

#endif //CPP__6_H
#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

struct Point
{
    double x, y;
};

double operator*(const Point &p1,const Point &p2) { return (p1.x*p2.y-p1.y*p2.x); }

class Polygon
{
private:
    vector<Point> ps;
protected:

public:
    double getArea();
    void pushPoint(double _x, double _y);
    void printPoints();
};

double Polygon::getArea()
{
    double area=0.0;

    for(size_t i=0;i!=ps.size();++i)
    {
        area+=ps[i] * ps[(i + 1) % ps.size()];
    }

    return 0.5 * (area >=0 ? area : -area);
}

void Polygon::pushPoint(double _x, double _y)
{
    //push点要素
    Point pt;
    pt.x=_x;
    pt.y=_y;

    ps.push_back(pt);
}

void Polygon::printPoints()
{
    //面要素
    for (size_t i=0;i!=ps.size();++i) {
        cout<<"P["<<i<<"]"<<"=("<<ps[i].x<<","<<ps[i].y<<")"<<endl;
    }
}

void inputData(Polygon &plygn) //input data from console
{
    double vx,vy;
    size_t i=0;

    cout<<"\nInput points coordinates, separated by space key. ^Z to end."<<endl;
    cout<<"P["<<i<<"]=";
    while (cin>>vx>>vy) {
        plygn.pushPoint(vx,vy);
        cout<<"P["<<++i<<"]=";
    }
    return;
}

int readData(string &dataFileName, Polygon &plygn)  //read data from file
{
    int itemsRead=0;
    FILE *sf;
    double vx,vy;

    if (sf=fopen(dataFileName.c_str(),"r")) {
        cout<<"Read data from "+dataFileName+" ... ... ";
        while (!feof(sf)) {
            fscanf(sf,"%lf %lf",&vx,&vy);
            plygn.pushPoint(vx,vy);
            itemsRead++;
        }
        cout<<itemsRead<<" points read."<<endl;
        fclose(sf);
        sf=NULL;
    }
    else itemsRead=-1;

    return itemsRead;

}

// main
int CalPolygonArea()
{

    Polygon pn;
    string sn="D:\\Github\\CPP\\data.txt";

    if (readData(sn,pn)!=-1) {
        pn.printPoints();
        cout<<"Area="<<pn.getArea()<<endl;
    }
    else cout<<"404 File not found."<<endl;

    return 0;
}