typedef struct {                    // 图的定义
    int numVertices, numEdges;      // 图中实际的顶点数和边数
    char VerticesList[MAXV];        // 顶点表，MAXV为已定义常量
    int Edge[MAXV][MAXV];           // 邻接矩阵
}MGraph;

