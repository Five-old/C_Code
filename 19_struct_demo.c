#include <stdio.h>
#include <string.h>

// 定义结构体struct，这里定义了一个宠物结构体，包含名字、年龄、等级、最大生命值、最大魔法值、攻击力、防御力等属性
struct Pets
{
    char name[50];
    int age;
    int level;
    int max_HP;
    int max_MP;
    int attack;
    int defense;
};

// 使用typedef构造结构体时 human_class 可以省略不写，只要最后的名字写上就可以了，但是为了可读性，建议写上
typedef struct human_class
{
    char name[50];
    int age;
    int level;
    int max_HP;
    int max_MP;
    int attack;
    int defense;
} HM;

void level_up(HM *lv_up);

int main()
{

    struct Pets cat_grey = {"Cat Grey", 2, 2, 100, 50, 10, 5};

    // printf("Name: %s\n", cat_grey.name);
    // printf("Age: %d\n", cat_grey.age);
    // printf("Level: %d\n", cat_grey.level);
    // printf("Max HP: %d\n", cat_grey.max_HP);
    // printf("Max MP: %d\n", cat_grey.max_MP);
    // printf("Attack: %d\n", cat_grey.attack);
    // printf("Defense: %d\n\n", cat_grey.defense);

    struct Pets cat_white = {"Cat White", 3, 3, 120, 60, 15, 8};
    // printf("Name: %s\n", cat_white.name);
    // printf("Age: %d\n", cat_white.age);
    // printf("Level: %d\n", cat_white.level);
    // printf("Max HP: %d\n", cat_white.max_HP);
    // printf("Max MP: %d\n", cat_white.max_MP);
    // printf("Attack: %d\n", cat_white.attack);
    // printf("Defense: %d\n", cat_white.defense);

    struct Pets cat_black = {"Cat Black", 4, 4, 150, 80, 20, 10};

    // 结构体数组
    struct Pets pet_array[3] = {cat_grey, cat_white, cat_black};
    int length = sizeof(pet_array) / sizeof(pet_array[0]);
    for (int i = 0; i < length; i++)
    {
        printf("\nPet %d:\n", i + 1);
        printf("Name: %s\n", pet_array[i].name);
        printf("Age: %d\n", pet_array[i].age);
        printf("Level: %d\n", pet_array[i].level);
        printf("Max HP: %d\n", pet_array[i].max_HP);
        printf("Max MP: %d\n", pet_array[i].max_MP);
        printf("Attack: %d\n", pet_array[i].attack);
        printf("Defense: %d\n", pet_array[i].defense);
    }

    printf("\nUsing typedef:\n");

    // 可以直接使用HM来定义结构体变量
    HM ranger = {"normal ranger", 23, 5, 200, 60, 10, 8};
    printf("Name: %s\n", ranger.name);
    printf("Age: %d\n", ranger.age);
    printf("Level: %d\n", ranger.level);
    printf("Max HP: %d\n", ranger.max_HP);
    printf("Max MP: %d\n", ranger.max_MP);
    printf("Attack: %d\n", ranger.attack);
    printf("Defense: %d\n", ranger.defense);

    printf("\n7 hard days passed, ranger leveled up!\n");
    ranger.level = 6;
    ranger.max_HP = 250;
    ranger.max_MP = 80;
    ranger.attack = 15;
    ranger.defense = 10;
    printf("after level up:\n");
    printf("Name: %s\n", ranger.name);
    printf("Age: %d\n", ranger.age);
    printf("Level: %d\n", ranger.level);
    printf("Max HP: %d\n", ranger.max_HP);
    printf("Max MP: %d\n", ranger.max_MP);
    printf("Attack: %d\n", ranger.attack);
    printf("Defense: %d\n", ranger.defense);

    HM knight = {"normal knight", 30, 5, 300, 40, 15, 12};
    printf("\nbefore knight level up:\n");
    printf("Name: %s\n", knight.name);
    printf("Age: %d\n", knight.age);
    printf("Level: %d\n", knight.level);
    printf("Max HP: %d\n", knight.max_HP);
    printf("Max MP: %d\n", knight.max_MP);
    printf("Attack: %d\n", knight.attack);
    printf("Defense: %d\n", knight.defense);
    level_up(&knight);
    printf("\nafter knight level up:\n");
    printf("Name: %s\n", knight.name);
    printf("Age: %d\n", knight.age);
    printf("Level: %d\n", knight.level);
    printf("Max HP: %d\n", knight.max_HP);
    printf("Max MP: %d\n", knight.max_MP);
    printf("Attack: %d\n", knight.attack);
    printf("Defense: %d\n", knight.defense);

    return 0;
}

// 问：第140行为什么不可以这样写：lv_up.level += 1;lv_up->level是什么意思？
// 答：
// lv_up 的类型是 HM *，也就是“指向 HM 结构体的指针”，它本身不是结构体变量。因此不能用点号直接访问成员：
// lv_up.level += 1; 错：lv_up 是指针

// 要先访问它指向的结构体，再访问 level 成员。-> 就是这个操作的简写：
// lv_up->level += 1; 它等价于：(*lv_up).level += 1;
// 先解引用 lv_up，得到结构体变量，再访问 level 成员
// 这里括号不能省略，因为 . 的优先级高于 *。简单记：

// 结构体变量用 .：knight.level
// 结构体指针用 ->：lv_up->level
// 在你的调用 level_up(&knight) 中，&knight 把 knight 的地址传给 lv_up，所以在函数里通过 lv_up->level 修改的就是原来的 knight.level。

void level_up(HM *lv_up)
{
    printf("\n7 hard days passed, %s leveled up!\n", lv_up->name);
    lv_up->level += 1; // 这里的 lv_up 是指针，不能用点号访问成员.错误写法：lv_up.level += 1;
    lv_up->max_HP += 50;
    lv_up->max_MP += 20;
    lv_up->attack += 5;
    lv_up->defense += 2;
}