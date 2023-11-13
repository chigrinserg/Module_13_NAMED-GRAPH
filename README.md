# Module_13_NAMED-GRAPH
Итоговое задание к модулю "Графы и деревья". По условию задания в заданном графе следует найти пары людей, знакомых друг с другом через три рукопожатия. Для реализации задания решено использовать алгоритм Дейкстры как вычисляющий расстояния до всех вершин, начиная от стартовой. Основная идея заключалась в том, чтобы алгоритм последовательно перебрал все вершины графа в качестве стратовых, для чего функция вызова алгоритма findMinDistanceDecstr(int fromVert) была заключена в цикл внутри функции findStrangers(). Число итераций цикла соответствует размеру массива вершин графа. Граф не взвешенный и неориентированный, длина каждого ребра принята равной 1. В выводе результата работы алгоритма введено ограничение - вывод только таких вершин, расстоние между которыми равно 3  
