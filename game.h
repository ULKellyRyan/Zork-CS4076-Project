#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMainWindow>

#include "player.h"
#include "enemy.h"
#include "room.h"
#include "inventory.h"
#include "item.h"
#include "gameitem.h"
#include "weapon.h"
#include "treasure.h"

class Player;
class Enemy;
class Weapon;

//QGraphicsView class provides a widget for displaying the contents of a QGraphicsScene.
class Game : public QGraphicsView  {
    Q_OBJECT
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i;
    Enemy *monster;
    Inventory<Weapon> *armoury;
    Inventory<Item> *inventory;
    void createRooms();
    void printWelcome();
    void help();
private slots:
    void removeFromRoom(GameItem *item);
    void enableMovement();
public:
    Player *player;
    Room *currentRoom;
    Game(QWidget *parent = nullptr);
    ~Game();
};

#endif // GAME_H
