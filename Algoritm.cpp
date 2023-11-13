#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>

#define VERYBIGINT 1000000000 // очень большое число
int count = 0; //переменная подсчета выводимых пар вершин

void Graph::findStrangers() //поиск незнакомых
{
    for (int i = 0; i < (std::end(vertexes) - std::begin(vertexes)); ++i)
    {
        findMinDistanceDecstr(vertexes[i]);
    }
}
void Graph::findMinDistanceDecstr(int fromVert) //код алгоритма Дейкстры
{
    int distances[SIZE]; // массив меток
    for (int i = 0; i < SIZE; i++) // инициализация меток
    {
        distances[i] = VERYBIGINT;
    }
    distances[fromVert] = 0;

    bool passed[SIZE]; // признак, что вершина окрашена
    for (int i = 0; i < SIZE; i++)
    {
        passed[i] = false; // все неокрашены изначально
    }
    // принимаем стартовую вершину за текущую
    int currentVertexNum = fromVert;
    int min_dist = 0;
    while (min_dist != VERYBIGINT)
    {
        passed[currentVertexNum] = true; // окрашиваем текущую

        for (int i = 0; i < SIZE; i++)
        {
            // для смежных ребер пересчитываем метки
            if (edgeExists(currentVertexNum, i) && distances[currentVertexNum] + matrix[currentVertexNum][i] < distances[i])
                distances[i] = distances[currentVertexNum] + matrix[currentVertexNum][i];
        }
        min_dist = VERYBIGINT;
        for (int i = 0; i < SIZE; i++)
        {
            // выбираем новую текущую вершину
            if (vertexExists(i) && !passed[i] && distances[i] < min_dist) // выбор новой вершины
            {
                min_dist = distances[i];
                currentVertexNum = i;
            }
        }
    }
    for (int i = 0; i < vertexCount; i++) // вывод результата
    {
        if ((distances[vertexes[i]] == 3)) /*устанавливаем заданное расстояние между парами, соответствующее
                                           дистанции трех рукопожатий*/
        {
            if (fromVert < i) /*задаем условие блокировки вывода обратных связей между одними и теми
                              же людьми: "Иван-Петр" и "Петр-Иван"(обратная)*/
            {
                std::cout << fromVert << "-" << i<<" "; //вывод номеров вершин
                std::cout << "("<<names[fromVert] << " - " << names[i]<<")" << '\n';//вывод имен
            }
            ++count;
        }
    }
}
void Graph::Count()
{
    std::cout << "Всего в данном графе обнаружены " << count/2 << " пар имен с указанным расстоянием между ними" << '\n';
}
