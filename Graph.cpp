#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>

Graph::Graph() //конструктор по умолчанию
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			matrix[i][j] = 0;
		}
	}
	vertexCount = 0;
}

void Graph::addVertex(int v_number, std::string name) //метод добавления вершины
{
	vertexes[vertexCount++] = v_number; //запись номеров вершин в массив vertexes[SIZE];
	names.push_back(name); //запись имен в массив std::vector<std::string>names;
}

void Graph::addEdge(int v1, int v2, int weight) //метод добавления ребра
{
	// checks if the vertex exists in the graph
	if ((v1 >= SIZE) || (v2 > SIZE))
	{
		std::cout << "Vertex does not exists!";
	}

	if (v1 == v2) {   // checks if the vertex is connecting to itself
		std::cout << "Same Vertex!";
	}
	matrix[v1][v2] = weight;
	matrix[v2][v1] = weight;
}

bool Graph::edgeExists(int v1, int v2) //проверка существования ребра
{
	return matrix[v1][v2] != 0;
}

bool Graph::vertexExists(int vnumber) //проверка существования вершины
{
	for (int i = 0; i < vertexCount; i++)
		if (vertexes[i] == vnumber)
			return true;
	return false;
}
