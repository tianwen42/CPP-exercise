def dijkstra(start, mgraph):
    # 已确定节点组
    passed = [start]
    # 未确定节点
    nopass = [x for x in range(len(mgraph)) if x != start]
    # 路径长度
    dis = mgraph[start]

    while len(nopass):
        idx = nopass[0]
        for i in nopass:
            if dis[i] < dis[idx]: idx = i

        nopass.remove(idx)
        passed.append(idx)

        print(dis, idx)
        # print(nopass, passed)

        for i in nopass:
            # print('dis[{0}]={1}'.format(i, dis[idx]))
            # print(mgraph[idx])
            if dis[idx] + mgraph[idx][i] < dis[i]:
                # print('和{}'.format(dis[idx] + mgraph[idx][i]))
                dis[i] = dis[idx] + mgraph[idx][i]

    return dis, passed


if __name__ == "__main__":
    inf = 9999
    graph = [[inf, inf, 10, inf, 30, 100],
             [inf, inf, 5, inf, inf, inf],
             [inf, inf, inf, 50, inf, inf],
             [inf, inf, inf, inf, inf, 10],
             [inf, inf, inf, 20, inf, 60],
             [inf, inf, inf, inf, inf, inf]]
    print('路径长度,passed')
    print(dijkstra(0, graph))
