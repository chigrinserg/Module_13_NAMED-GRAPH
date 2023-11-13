#pragma once
#include <vector>
#include <string>
#define SIZE 15

class Graph
{
private:
	int size = 1;
	int matrix[SIZE][SIZE];
	int vertexes[SIZE];
	std::vector<std::string>names; //вектор хранения имен
	int vertexCount = 0;
public:
	
	Graph();
	void addVertex(int vnumber, std::string name);
	void addEdge(int v1, int v2, int weight = 1);
	bool edgeExists(int v1, int v2);
	bool vertexExists(int vnumber);
	void findMinDistanceDecstr(int fromVert);
	void findStrangers(); //поиск вершин, отстоящих на заданное расстояние
	void Count();
};
