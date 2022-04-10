//
// Created by YangLin on 2022/4/8.
//

bool pointInRegion(cocos2d::CCPoint pt, vector <cocos2d::CCPoint> plist) {
    int nCross = 0;    // 定义变量，统计目标点向右画射线与多边形相交次数

    for (int i = 0; i < plist.size(); i++) {   //遍历多边形每一个节点

        cocos2d::CCPoint p1;
        cocos2d::CCPoint p2;

        p1 = plist[i];
        p2 = plist[(i + 1) % plist.size()];  // p1是这个节点，p2是下一个节点，两点连线是多边形的一条边
        // 以下算法是用是先以y轴坐标来判断的
        if (p1.y == p2.y)
            continue;   //如果这条边是水平的，跳过
        if (pt.y < min(p1.y, p2.y)) //如果目标点低于这个线段，跳过
            continue;
        if (pt.y >= max(p1.y, p2.y)) //如果目标点高于这个线段，跳过
            continue;
    //那么下面的情况就是：如果过p1画水平线，过p2画水平线，目标点在这两条线中间
        double x = (double) (pt.y - p1.y) * (double) (p2.x - p1.x) / (double) (p2.y - p1.y) + p1.x;
    // 这段的几何意义是 过目标点，画一条水平线，
        if (x > pt.x)
            nCross++; //如果交点在右边，统计加一。这等于从目标点向右发一条射线（ray），与多边形各边的相交（crossing）次数
    }
    if (nCross % 2 == 1) {
        return true; //如果是奇数，说明在多边形里
    } else {
        return false; //否则在多边形外 或 边上
    }

}