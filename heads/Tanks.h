#pragma once

struct gundata
{
    string nameg;
	string dnameg;
    Vec2 sg;
    float gload;
    float pload;
    int uron;
};

struct tdata
{
    string namet;
	string dnamet;
    Vec2 st;
    Vec2 sgt;
    float tfov;
};
struct hsdata
{
    string namehs;
	string dnamehs;
    Vec2 shs;
    Vec2 sths;
    float hsfov;
    float hsspeed;
    float diameter;
    float sdvig;
    int hp;
    float uskr;
};

void tankData(vector<gundata>& gddos, vector<tdata>& tddos, vector<hsdata>& hsddos)
{
    //////////////////////////////// орудия
    gundata d;
    d.nameg = "g1.json";
	d.dnameg = "g1d.json";
    d.sg = Vec2(118.0, 0.0);
    d.gload = 6;
    d.uron = 1000;
    gddos.push_back(d);

    d.nameg = "g2.json";
	d.dnameg = "g2d.json";
    d.sg = Vec2(31.0, 0.0);
    d.gload = 0.15;
    d.uron = 100;
    gddos.push_back(d);

    d.nameg = "g3.json";
	d.dnameg = "g3d.json";
    d.sg = Vec2(45.0, 0.0);
    d.gload = 9.5;
    d.uron = 20000;
    gddos.push_back(d);

    d.nameg = "g4.json";
	d.dnameg = "g4d.json";
    d.sg = Vec2(95.0, 0.0);
    d.gload = 7;
    d.uron = 4000;
    gddos.push_back(d);

    d.nameg = "g5.json";
	d.dnameg = "g5d.json";
    d.sg = Vec2(74.0, 0.0);
    d.gload = 2;
    d.uron = 8000;
    gddos.push_back(d);

    //////////////////////////////// башни
    tdata dt;
    dt.namet = "t1.json";
	dt.dnamet = "t1d.json";
    dt.st = Vec2(110.0, 0.0);
    dt.sgt = Vec2(0.0, 0.0);
    dt.tfov = 4.14;
    tddos.push_back(dt);

    dt.namet = "t2.json";
	dt.dnamet = "t2d.json";
    dt.st = Vec2(110.0, 0.0);
    dt.sgt = Vec2(10.0, 0.0);
    dt.tfov = 2.56;
    tddos.push_back(dt);

    dt.namet = "t3.json";
	dt.dnamet = "t3d.json";
    dt.st = Vec2(110.0, 0.0);
    dt.sgt = Vec2(-1.0, 0.0);
    dt.tfov = 1.14;
    tddos.push_back(dt);

    dt.namet = "t4.json";
	dt.dnamet = "t4d.json";
    dt.st = Vec2(110.0, 0.0);
    dt.sgt = Vec2(10.0, 0.0);
    dt.tfov = 2.0;
    tddos.push_back(dt);

    dt.namet = "t5.json";
	dt.dnamet = "t5d.json";
    dt.st = Vec2(110.0, 0.0);
    dt.sgt = Vec2(0.0, 0.0);
    dt.tfov = 4.14;
    tddos.push_back(dt);

	
    //////////////////////////////// корпуса
    hsdata dhs;
    dhs.namehs = "hs1.json";
	dhs.dnamehs = "hs1d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 300;
    dhs.uskr = 200;
    dhs.diameter = 35;
    dhs.sdvig = 17;
    dhs.hp = 5000;
    hsddos.push_back(dhs);

    dhs.namehs = "hs2.json";
	dhs.dnamehs = "hs2d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 200;
    dhs.uskr = 200;
    dhs.diameter = 35;
    dhs.sdvig = 17;
    dhs.hp = 5500;
    hsddos.push_back(dhs);

    dhs.namehs = "hs2v2.json";
	dhs.dnamehs = "hs2v2d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 200;
    dhs.uskr = 200;
    dhs.diameter = 35;
    dhs.sdvig = 17;
    dhs.hp = 4000;
    hsddos.push_back(dhs);

    dhs.namehs = "hs3.json";
	dhs.dnamehs = "hs3d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 400;
    dhs.uskr = 200;
    dhs.diameter = 35;
    dhs.sdvig = 17;
    dhs.hp = 4500;
    hsddos.push_back(dhs);

    dhs.namehs = "hs3v2.json";
	dhs.dnamehs = "hs3v2d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 100;
    dhs.uskr = 200;
    dhs.diameter = 35;
    dhs.sdvig = 17;
    dhs.hp = 7000;
    hsddos.push_back(dhs);

    dhs.namehs = "hs4.json";
	dhs.dnamehs = "hs4d.json";
    dhs.shs = Vec2(0.0, 0.0);
    dhs.hsfov = 3.14;
    dhs.hsspeed = 100;
    dhs.uskr = 200;
    dhs.diameter = 61;
    dhs.sdvig = 23;
    dhs.hp = 10000;
    hsddos.push_back(dhs);
}