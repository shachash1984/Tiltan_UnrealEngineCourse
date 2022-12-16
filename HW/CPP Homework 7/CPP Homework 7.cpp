// CPP Homework 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"
#include "Mesh.h"
#include "Player.h"

void Stack() {
    Mesh body;
    Mesh weapon;
    Player player("Player1", &body, &weapon);
    std::cout << player.ToString();
}

void Heap() {
    Mesh* body = new Mesh("Body", Point(5, 5, 5), std::vector<Vertex> {
        Vertex(Point(0, 1, 0), Color()), Vertex(Point(0, 2, 0), Color()), Vertex(Point(0, 3, 0), Color(1,0,0,1)),
        Vertex(Point(0, 4, 0), Color()), Vertex(Point(0, 5, 0), Color()), Vertex(Point(0, 6, 0), Color(10,5235,-236,2)),
        Vertex(Point(0, 7, 0), Color()), Vertex(Point(0, 8, 0), Color()), Vertex(Point(0, 9, 0), Color()),
        Vertex(Point(1, 1, 0), Color()), Vertex(Point(2, 1, 0), Color()), Vertex(Point(3, 1, 0), Color()),
        Vertex(Point(4, 1, 0), Color()), Vertex(Point(5, 1, 0), Color()), Vertex(Point(6, 1, 0), Color()),
        Vertex(Point(7, 1, 0), Color()), Vertex(Point(8, 1, 0), Color()), Vertex(Point(9, 1, 0), Color()),
        Vertex(Point(0, 1, 1), Color()), Vertex(Point(0, 1, 2), Color()), Vertex(Point(0, 1, 3), Color()),
        Vertex(Point(0, 1, 4), Color()), Vertex(Point(0, 1, 5), Color()), Vertex(Point(0, 1, 6), Color()),
        Vertex(Point(0, 1, 7), Color()), Vertex(Point(0, 1, 8), Color()), Vertex(Point(0, 1, 9), Color()),
        Vertex(Point(3, 3, 3), Color()), Vertex(Point(2, 2, 2), Color()), Vertex(Point(1, 1, 1), Color()),
    });
    Mesh* weapon = new Mesh("Gun", Point(7, 2, 3), std::vector<Vertex> {
        Vertex(Point(0, 1, 0), Color()), Vertex(Point(0, 2, 0), Color()), Vertex(Point(0, 3, 0), Color(1, 0, 0, 1)),
            Vertex(Point(0, 4, 0), Color()), Vertex(Point(0, 5, 0), Color()), Vertex(Point(0, 6, 0), Color(10, 5235, -236, 2)),
            Vertex(Point(0, 7, 0), Color()), Vertex(Point(0, 8, 0), Color()), Vertex(Point(0, 9, 0), Color()),
            Vertex(Point(1, 1, 0), Color()), Vertex(Point(2, 1, 0), Color()), Vertex(Point(3, 1, 0), Color()),
            Vertex(Point(4, 1, 0), Color()), Vertex(Point(5, 1, 0), Color()), Vertex(Point(6, 1, 0), Color()),
    });
    Player* player = new Player("Player2", body, weapon);
    std::cout << player->ToString();

    delete body;
    std::cout << "body died\n";
    delete weapon;
    std::cout << "weapon died\n";
    delete player;
    std::cout << "player died\n";
}

int main()
{
    Stack();
    Heap();
}
