#include <gamebase/Gamebase.h>
//
using namespace gamebase;
using namespace std;

int stepn = 100;
int game = 0;

struct gundata
{
	string nameg;
	Vec2 sg;
	float gload;
	float pload;
	int uron;
};

struct tdata
{
	string namet;
	Vec2 st;
	Vec2 sgt;
	float tfov;
};
struct hsdata
{
	string namehs;
	Vec2 shs;
	Vec2 sths;
	float hsfov;
	float hsspeed;
	float diameter;
	float sdvig;
	int hp;
};
class MyApp : public App
{
	void play()
	{
		game = 1;
		stolb1.hide();
		blk.hide();
	}
	
	void stopgame()
	{
		stolb1.show();
		blk.show();
		game = 0;
	}

	////////////////////////////////////////////// //////////////////////////////////////////////
	void load()
	{
		mainhsangle = 0;
		//mainhs.setAngle(mainhsangle);
		//auto tvec = Vec2(10.0, 0.0);
		//tvec.rotate(mainhs.angle());
		//maint.setPos(tvec + mainhs.pos());
		angar.setPos(angar.pos() + Vec2(300.0, 200.0));
        kishki_angara.setPos(Vec2(300.0, 200.0));
		wall1.setPos(angar.pos() + Vec2(0.0, 63.0));
		wall2.setPos(angar.pos() + Vec2(0.0, -63.0));
		tower = 0;
		gun = 0;
		housingm = 0;
		Acom = 0;
		Azar = 0;
		Araddist = 0;
		Amesh_vod = 0;
		Anavod = 0;
		//////////////////////////////// ������
		gundata d;
		d.nameg = "g1.json";
		d.sg = Vec2(118.0, 0.0);
		d.gload = 6;
		d.uron = 1000;
		gddos.push_back(d);

		d.nameg = "g2.json";
		d.sg = Vec2(31.0, 0.0);
		d.gload = 0.15;
		d.uron = 100;
		gddos.push_back(d);

		d.nameg = "g3.json";
		d.sg = Vec2(45.0, 0.0);
		d.gload = 9.5;
		d.uron = 20000;
		gddos.push_back(d);

		d.nameg = "g4.json";
		d.sg = Vec2(95.0, 0.0);
		d.gload = 7;
		d.uron = 4000;
		gddos.push_back(d);

		d.nameg = "g5.json";
		d.sg = Vec2(74.0, 0.0);
		d.gload = 2;
		d.uron = 8000;
		gddos.push_back(d);
		//////////////////////////////// �����
		tdata dt;
		dt.namet = "t1.json";
		dt.st = Vec2(110.0, 0.0);
		dt.sgt = Vec2(0.0, 0.0);
		dt.tfov = 4.14;
		tddos.push_back(dt);

		dt.namet = "t2.json";
		dt.st = Vec2(110.0, 0.0);
		dt.sgt = Vec2(10.0, 0.0);
		dt.tfov = 2.56;
		tddos.push_back(dt);

		dt.namet = "t3.json";
		dt.st = Vec2(110.0, 0.0);
		dt.sgt = Vec2(-1.0, 0.0);
		dt.tfov = 1.14;
		tddos.push_back(dt);

		dt.namet = "t4.json";
		dt.st = Vec2(110.0, 0.0);
		dt.sgt = Vec2(10.0, 0.0);
		dt.tfov = 2.0;
		tddos.push_back(dt);

		dt.namet = "t5.json";
		dt.st = Vec2(110.0, 0.0);
		dt.sgt = Vec2(0.0, 0.0);
		dt.tfov = 4.14;
		tddos.push_back(dt);
		//////////////////////////////// �������
		hsdata dhs;
		dhs.namehs = "hs1.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 300;
		dhs.diameter = 35;
		dhs.sdvig = 17;
		dhs.hp = 5000;
		hsddos.push_back(dhs);

		dhs.namehs = "hs2.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 200;
		dhs.diameter = 35;
		dhs.sdvig = 17;
		dhs.hp = 5500;
		hsddos.push_back(dhs);

		dhs.namehs = "hs2v2.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 200;
		dhs.diameter = 35;
		dhs.sdvig = 17;
		dhs.hp = 4000;
		hsddos.push_back(dhs);

		dhs.namehs = "hs3.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 400;
		dhs.diameter = 35;
		dhs.sdvig = 17;
		dhs.hp = 4500;
		hsddos.push_back(dhs);

		dhs.namehs = "hs3v2.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 100;
		dhs.diameter = 35;
		dhs.sdvig = 17;
		dhs.hp = 7000;
		hsddos.push_back(dhs);

		dhs.namehs = "hs4.json";
		dhs.shs = Vec2(0.0, 0.0);
		dhs.hsfov = 3.14;
		dhs.hsspeed = 100;
		dhs.diameter = 61;
		dhs.sdvig = 23;
		dhs.hp = 10000;
		hsddos.push_back(dhs);
		///////////////////////////////// "��������� �������� ������"
		
		maing = guns.load("g1.json");
		maint = towers.load("t1.json");
		mainhs = housing.load("hs1.json");

		//////////////////////////////// "��������� �������� ����������"

		animg = guns.load("g1.json");
		animt = towers.load("t1.json");
		animhs = housing.load("hs1.json");
		mainbhbphspbhbp = bhbp.load("hpb.json");		
		animbhbphspbhbp = bhbp.load("hpb.json");


		mainhp = hsddos[housingm].hp;
		myhp = hsddos[animhs].hp;

		animhsangle = 0;
		Atower = 0;
		Agun = 0;
		Ahousing = 0;
		gusliy = 0;
		dviglo=0;
		bashnia=0;
		triplex=0;
		dulo=0;
		bk=0;
		radio=0;

		auto tvec = Vec2(10.0, 0.0);
		tvec.rotate(animhs.angle());
		maint.setPos(tvec + mainhs.pos());

		auto atvec = Vec2(10.0, 0.0);
		//atvec.rotate(animhs.angle());
		animt.setPos(atvec + animhs.pos());

		auto gvec = gddos[gun].sg;
		gvec.rotate(animt.angle());
		maing.setPos(gvec + maint.pos());

		auto agvec = gddos[gun].sg;
		agvec.rotate(animt.angle());
		animg.setPos(agvec + animt.pos());

		rload.setScaleX(0);


		/////������
		connect(newgame, play);
		connect(exit, close);
	}
	////////////////////////////////////////////////////////////////////////////////////////////

	void process(Input input)
	{
		//�������� ���������� ������ ����
		if (game == 0)
			return;
		//////////////////////////////////////////////����������//////////////////////////////////////////////
		using namespace InputKey;
        kishki_angara.hide();
        
		ratio = (mainhp) / (hsddos[housingm].hp);
		myratio = (myhp) / (hsddos[animhs].hp);
		auto angvec = mainhs.pos() - animt.pos();
		if (myhp <= 0)
			myhp = 0;
		if (mainhp <= 0)
			mainhp = 0;

		auto spvec = Vec2(hsddos[housingm].hsspeed, 0.0);
		spvec.rotate(mainhsangle);
		//-------------------------���������� �������

		/*if (dulo == 1)
		{
			gddos[gun].gload * 2;
		}
		*/

		//-------------------------������
		if (input.pressed('�') || input.pressed('w') && (dviglo != 2))
		{
			mainhs.setPos(mainhs.pos() + spvec * timeDelta());
			maint.setPos(maint.pos() + spvec * timeDelta());
			maing.setPos(maing.pos() + spvec * timeDelta());
			if (mainhs.box().intersects(wall1.box()) || mainhs.box().intersects(wall2.box()))
			{
                kishki_angara.show();
                angar.hide();
				mainhs.setPos(mainhs.pos() - spvec * timeDelta());
				maint.setPos(maint.pos() - spvec * timeDelta());
				maing.setPos(maing.pos() - spvec * timeDelta());
			}
            else
            {
                kishki_angara.hide();
                angar.show();
            }
		}
		//---------------------------------�����
		if (input.pressed('�') || input.pressed('s') && (dviglo != 2))
		{
			mainhs.setPos(mainhs.pos() - spvec * timeDelta());
			maint.setPos(maint.pos() - spvec * timeDelta());
			maing.setPos(maing.pos() - spvec * timeDelta());
			if (mainhs.box().intersects(wall1.box()) || mainhs.box().intersects(wall2.box()))
			{
                kishki_angara.show();
                angar.hide();
				mainhs.setPos(mainhs.pos() + spvec * timeDelta());
				maint.setPos(maint.pos() + spvec * timeDelta());
				maing.setPos(maing.pos() + spvec * timeDelta());
			}
            else
            {
                kishki_angara.hide();
                angar.show();
            }
		}
		
        if (mainhs.box().intersects(angar.box()))
        {
            kishki_angara.show();
            angar.hide();
        }
        else
        {
            kishki_angara.hide();
            angar.show();
        }

		
		//------------------------------------�����
		if (input.pressed(A))
		{
			auto tvec = Vec2(10.0, 0.0);
			mainhsangle += 3.14 * timeDelta();
			mainhs.setAngle(mainhsangle);
			tvec.rotate(mainhs.angle());
			maint.setPos(tvec + mainhs.pos());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
			if (mainhs.box().intersects(wall1.box()) || mainhs.box().intersects(wall2.box()))
			{
				auto tvec = Vec2(10.0, 0.0);
				mainhsangle -= 3.14 * timeDelta();
				mainhs.setAngle(mainhsangle);
				tvec.rotate(mainhs.angle());
				maint.setPos(tvec + mainhs.pos());
				auto gvec = gddos[gun].sg + tddos[tower].sgt;
				gvec.rotate(maint.angle());
				maing.setPos(gvec + maint.pos());
			}
		}
		//-------------------------------------������
		if (input.pressed(D))
		{
			auto tvec = Vec2(10.0, 0.0);
			mainhsangle -= 3.14 * timeDelta();
			mainhs.setAngle(mainhsangle);
			tvec.rotate(mainhs.angle());
			maint.setPos(tvec + mainhs.pos());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
			if (mainhs.box().intersects(wall1.box()) || mainhs.box().intersects(wall2.box()))
			{
				auto tvec = Vec2(10.0, 0.0);
				mainhsangle += 3.14 * timeDelta();
				mainhs.setAngle(mainhsangle);
				tvec.rotate(mainhs.angle());
				maint.setPos(tvec + mainhs.pos());
				auto gvec = gddos[gun].sg + tddos[tower].sgt;
				gvec.rotate(maint.angle());
				maing.setPos(gvec + maint.pos());
			}
		}
		
		//--------------------------------------����� ������
		if ((input.pressed(E) || input.pressed(K))&&(bashnia<2))
		{
			maint.setAngle(maint.angle() - tddos[tower].tfov*timeDelta());
			maing.setAngle(maing.angle() - tddos[tower].tfov*timeDelta());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}

		//---------------------------------------����� �����
		if ((input.pressed(Q) || input.pressed(J)) && (bashnia<2))
		{
			maint.setAngle(maint.angle() + tddos[tower].tfov*timeDelta());
			maing.setAngle(maing.angle() + tddos[tower].tfov*timeDelta());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}
		/*
		if (maint.angle() > 6.28)
		maint.setAngle(0);
		//	if (maint.angle() == -3.14)
		//		maint.setAngle(3.14);
		*/

		//-----------------------------------�������
		if ((input.pressed(Space)) && (shellTimer.time() > gddos[gun].gload) && (dulo != 2))
		{
			shellTimer.start();
			auto shellCreate = shaders2.load("shell.json");
			shellCreate.setAngle(maing.angle());
			shellCreate.setPos(maing.pos());
			//rload.setSizes(gddos[gun].gload/1000*timeDelta(), 20);
		}

		//-----------------------------------�����
		if (input.pressed(Y))
		{
			stopgame();
		}
		//�����������
		rtm = shellTimer.time() / gddos[gun].gload;
		if (rtm >= 1)
			rtm = 1;
		rload.setScaleX(rtm);

		/*
		if(input.pressed('�'))
		{
		ag1 = mainhs.angle() - maint.angle() + 3.14;
		if (ag1 < 3.14)
		{
		maint.setAngle(maint.angle() + 3.14 * timeDelta());
		maing.setAngle(maint.angle() + 3.14 * timeDelta());
		auto gvec = Vec2(47.0, -5.0);
		gvec.rotate(maint.angle());
		maing.setPos(gvec + maint.pos());
		}
		if (ag1 > 3.14)
		{
		maint.setAngle(maint.angle() - 3.14 * timeDelta());
		maing.setAngle(maint.angle() - 3.14 * timeDelta());
		auto gvec = Vec2(47.0, -5.0);
		gvec.rotate(maint.angle());
		maing.setPos(gvec + maint.pos());
		}
		}
		*/

		for (auto shell : shaders2.all())
		{
			auto vecsh = Vec2(2000.0, 0.0);
			vecsh.rotate(shell.angle());
			shell.setPos(shell.pos() + vecsh* timeDelta());
			if (!shell.box().intersects(gamepole.gameBox()))
			{
				shaders2.remove(shell);
				continue;
			}
			if (dist(shell.pos(), animhs.pos()) <= hsddos[Ahousing].diameter / 2)
			{
				mainhp -= gddos[gun].uron;
				shaders2.remove(shell);
				continue;
			}
			else
			{
				auto sdvigvec = Vec2(hsddos[Ahousing].sdvig, 0.0);
				sdvigvec.rotate(animhsangle);
				if (dist(shell.pos(), animhs.pos() + sdvigvec) <= hsddos[Ahousing].diameter / 2)
				{
					mainhp -= gddos[gun].uron * 2;
					shaders2.remove(shell);
					continue;
				}
				else
				{
					if (dist(shell.pos(), animhs.pos() - sdvigvec) <= hsddos[Ahousing].diameter / 2)
					{
						mainhp -= gddos[gun].uron * 3;
						shaders2.remove(shell);
						continue;
					}
					if (shell.box().intersects(wall1.box()) || shell.box().intersects(wall2.box()))
						shaders2.remove(shell);
				}
			}
		}

		//-----------------------------------------------����� ������

		if (input.justPressed('1') && gun != 0)
		{
			gun--;
			auto angel = maing.angle();
			guns.remove(maing);
			maing = guns.load(gddos[gun].nameg);
			maing.setAngle(angel);

			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}
		if (input.justPressed('2') && gun != 4)
		{
			gun++;
			auto angel = maing.angle();
			guns.remove(maing);
			maing = guns.load(gddos[gun].nameg);
			maing.setAngle(angel);
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}

		if (input.justPressed('3') && tower != 0)
		{
			tower--;
			auto angel = maint.angle();
			towers.remove(maint);
			maint = towers.load(tddos[tower].namet);
			maint.setAngle(angel);

			auto tvec = Vec2(10.0, 0.0);
			tvec.rotate(mainhs.angle());
			maint.setPos(tvec + mainhs.pos());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}
		if (input.justPressed('4') && tower != 4)
		{
			tower++;
			auto angel = maint.angle();
			towers.remove(maint);
			maint = towers.load(tddos[tower].namet);
			maint.setAngle(angel);

			auto tvec = Vec2(10.0, 0.0);
			tvec.rotate(mainhs.angle());
			maint.setPos(tvec + mainhs.pos());
			auto gvec = gddos[gun].sg + tddos[tower].sgt;
			gvec.rotate(maint.angle());
			maing.setPos(gvec + maint.pos());
		}

		if (input.justPressed('5') && housingm != 0)
		{
			housingm--;
			auto hspos = mainhs.pos();
			auto angel = mainhs.angle();
			housing.remove(mainhs);
			mainhs = housing.load(hsddos[housingm].namehs);
			mainhs.setAngle(angel);
			mainhs.setPos(hspos);

			myhp = hsddos[housingm].hp;
		}
		if (input.justPressed('6') && housingm != 5)
		{
			housingm++;
			auto hspos = mainhs.pos();
			auto angel = mainhs.angle();
			housing.remove(mainhs);
			mainhs = housing.load(hsddos[housingm].namehs);
			mainhs.setAngle(angel);
			mainhs.setPos(hspos);

			myhp = hsddos[housingm].hp;
		}
		//cout << animt.angle() << " -> " << angvec.angle() << endl;
		//////////////////////////////////////////////��� ������//////////////////////////////////////////////
		if (com != 0)
		{
			if (com == 1)
			{
				mainbhbphspbhbp.child<Texture>("com").show();
				mainbhbphspbhbp.child<Texture>("com2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("com").hide();
				mainbhbphspbhbp.child<Texture>("com2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("com").hide();
			mainbhbphspbhbp.child<Texture>("com2").hide();
		}
		//--------------------------------������
		if (raddist != 0)
		{
			if (raddist == 1)
			{
				mainbhbphspbhbp.child<Texture>("radd").show();
				mainbhbphspbhbp.child<Texture>("radd2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("radd").hide();
				mainbhbphspbhbp.child<Texture>("radd2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("radd").hide();
			mainbhbphspbhbp.child<Texture>("radd2").hide();
		}
		//--------------------------------����������
		if (zar != 0)
		{
			if (zar == 1)
			{
				mainbhbphspbhbp.child<Texture>("rldr").show();
				mainbhbphspbhbp.child<Texture>("rldr2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("rldr").hide();
				mainbhbphspbhbp.child<Texture>("rldr2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("rldr").hide();
			mainbhbphspbhbp.child<Texture>("rldr2").hide();
		}
		//--------------------------------���-���
		if (mesh_vod != 0)
		{
			if (mesh_vod == 1)
			{
				mainbhbphspbhbp.child<Texture>("drv").show();
				mainbhbphspbhbp.child<Texture>("drv2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("drv").hide();
				mainbhbphspbhbp.child<Texture>("drv2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("drv").hide();
			mainbhbphspbhbp.child<Texture>("drv2").hide();
		}

		//--------------------------------��������
		if (navod != 0)
		{
			if (navod == 1)
			{
				mainbhbphspbhbp.child<Texture>("gner").show();
				mainbhbphspbhbp.child<Texture>("gner2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("gner").hide();
				mainbhbphspbhbp.child<Texture>("gner2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("gner").hide();
			mainbhbphspbhbp.child<Texture>("gner2").hide();
		}

		mainbhbphspbhbp.child<Layout>("Row2").update();
		
		//////////////////////////////////////////////���� ������//////////////////////////////////////////////
		//--------------------------------���������
		if (dviglo != 0)
		{
			if (dviglo == 1)
			{
				mainbhbphspbhbp.child<Texture>("dvig").show();
				mainbhbphspbhbp.child<Texture>("dvig2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("dvig").hide();
				mainbhbphspbhbp.child<Texture>("dvig2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("dvig").hide();
			mainbhbphspbhbp.child<Texture>("dvig2").hide();
		}
		//--------------------------------�����
		if (radio != 0)
		{
			if (radio == 1)
			{
				mainbhbphspbhbp.child<Texture>("rad").show();
				mainbhbphspbhbp.child<Texture>("rad2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("rad").hide();
				mainbhbphspbhbp.child<Texture>("rad2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("rad").hide();
			mainbhbphspbhbp.child<Texture>("rad2").hide();
		}
		//--------------------------------��������
		if (triplex != 0)
		{
			if (triplex == 1)
			{
				mainbhbphspbhbp.child<Texture>("trip").show();
				mainbhbphspbhbp.child<Texture>("trip2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("trip").hide();
				mainbhbphspbhbp.child<Texture>("trip2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("trip").hide();
			mainbhbphspbhbp.child<Texture>("trip2").hide();
		}
		//--------------------------------��������
		if (gusliy != 0)
		{
			if (gusliy == 1)
			{
				mainbhbphspbhbp.child<Texture>("gus").show();
				mainbhbphspbhbp.child<Texture>("gus2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("gus").hide();
				mainbhbphspbhbp.child<Texture>("gus2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("gus").hide();
			mainbhbphspbhbp.child<Texture>("gus2").hide();
		}
		//--------------------------------����������
		if (bk == 1)
		{
			mainbhbphspbhbp.child<Texture>("bk").show();
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("bk").hide();
		}
		//--------------------------------�����
		if (bashnia != 0)
		{
			if (bashnia == 1)
			{
				mainbhbphspbhbp.child<Texture>("bus").show();
				mainbhbphspbhbp.child<Texture>("bus2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("bus").hide();
				mainbhbphspbhbp.child<Texture>("bus2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("bus").hide();
			mainbhbphspbhbp.child<Texture>("bus2").hide();
		}
		//--------------------------------����
		if (dulo != 0)
		{
			if (dulo == 1)
			{
				mainbhbphspbhbp.child<Texture>("ggun").show();
				mainbhbphspbhbp.child<Texture>("ggun2").hide();
			}
			else
			{
				mainbhbphspbhbp.child<Texture>("ggun").hide();
				mainbhbphspbhbp.child<Texture>("ggun2").show();
			}
		}
		else
		{
			mainbhbphspbhbp.child<Texture>("ggun").hide();
			mainbhbphspbhbp.child<Texture>("ggun2").hide();
		}
		//-----------------------------------------

		mainbhbphspbhbp.child<Layout>("Row").update();

		//////////////////////////////////////////////��� ������//////////////////////////////////////////////
		//--------------------------------������
		/*	if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//--------------------------------������
		if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//--------------------------------�������
		if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//--------------------------------��������
		if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//--------------------------------��������
		if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//--------------------------------����������
		if ( != 0)
		{
		if ( == 1)
		{
		mainbhbphspbhbp.child<Texture>("").show();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").show();
		}
		}
		else
		{
		mainbhbphspbhbp.child<Texture>("").hide();
		mainbhbphspbhbp.child<Texture>("").hide();
		}
		//-----------------------------------------

		mainbhbphspbhbp.child<Layout>("Row").update(); */

		//////////////////////////////////////////////���������/////////////////////////////////////////////


		if (AshellTimer.time() > gddos[Agun].gload)
		{
			AshellTimer.start();
			auto shellCreate = shaders2.load("shell.json");
			shellCreate.setAngle(animg.angle());
			shellCreate.setPos(animg.pos());

			//rload.setSizes(gddos[Agun].gload/1000*timeDelta(), 20);
		}


		/*
		if(input.pressed('�'))
		{
		ag1 = mainhs.angle() - maint.angle() + 3.14;
		if (ag1 < 3.14)
		{
		maint.setAngle(maint.angle() + 3.14 * timeDelta());
		maing.setAngle(maint.angle() + 3.14 * timeDelta());
		auto gvec = Vec2(47.0, -5.0);
		gvec.rotate(maint.angle());
		maing.setPos(gvec + maint.pos());
		}
		if (ag1 > 3.14)
		{
		maint.setAngle(maint.angle() - 3.14 * timeDelta());
		maing.setAngle(maint.angle() - 3.14 * timeDelta());
		auto gvec = Vec2(47.0, -5.0);
		gvec.rotate(maint.angle());
		maing.setPos(gvec + maint.pos());
		}
		}
		*/

		/*
		if( tower==0)
		{
		if( gun=1)
		{
		guns.clear();
		guns.add(loadObj <GameObj> ("g1"));
		sg = Vec2(32.0, 0.0);
		g1.setPos(t1.pos);
		sg.setAngle(t1);
		g1.setPos(g1.pos+sg*timeDelta());

		}
		}
		*/

		mainbhbphspbhbp.setPos(mainhs.pos().x, mainhs.pos().y + 50);
		mainbhbphspbhbp.child<GameObj>("hpb").setScaleX(myratio);
		animbhbphspbhbp.setPos(animhs.pos().x, animhs.pos().y + 50);
		animbhbphspbhbp.child<GameObj>("hpb").setScaleX(ratio);
		gamepole.setView(mainhs.pos());
		//////////////////////////////////////////////��������� ������//////////////////////////////////////////////
		if (Adviglo != 0)
		{
			if (Adviglo == 1)
			{
				animbhbphspbhbp.child<Texture>("dvig").show();
				animbhbphspbhbp.child<Texture>("dvig2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("dvig").hide();
				animbhbphspbhbp.child<Texture>("dvig2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("dvig").hide();
			animbhbphspbhbp.child<Texture>("dvig2").hide();
		}
		//--------------------------------�����
		if (Aradio != 0)
		{
			if (Aradio == 1)
			{
				animbhbphspbhbp.child<Texture>("rad").show();
				animbhbphspbhbp.child<Texture>("rad2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("rad").hide();
				animbhbphspbhbp.child<Texture>("rad2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("rad").hide();
			animbhbphspbhbp.child<Texture>("rad2").hide();
		}
		//--------------------------------��������
		if (Atriplex != 0)
		{
			if (Atriplex == 1)
			{
				animbhbphspbhbp.child<Texture>("trip").show();
				animbhbphspbhbp.child<Texture>("trip2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("trip").hide();
				animbhbphspbhbp.child<Texture>("trip2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("trip").hide();
			animbhbphspbhbp.child<Texture>("trip2").hide();
		}
		//--------------------------------��������
		if (Agusliy != 0)
		{
			if (Agusliy == 1)
			{
				animbhbphspbhbp.child<Texture>("gus").show();
				animbhbphspbhbp.child<Texture>("gus2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("gus").hide();
				animbhbphspbhbp.child<Texture>("gus2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("gus").hide();
			animbhbphspbhbp.child<Texture>("gus2").hide();
		}
		//--------------------------------����������
		if (Abk == 1)
		{
			animbhbphspbhbp.child<Texture>("bk").show();
		}
		else
		{
			animbhbphspbhbp.child<Texture>("bk").hide();
		}
		//--------------------------------�����
		if (Abashnia != 0)
		{
			if (Abashnia == 1)
			{
				animbhbphspbhbp.child<Texture>("bus").show();
				animbhbphspbhbp.child<Texture>("bus2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("bus").hide();
				animbhbphspbhbp.child<Texture>("bus2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("bus").hide();
			animbhbphspbhbp.child<Texture>("bus2").hide();
		}
		//--------------------------------����
		if (Adulo != 0)
		{
			if (Adulo == 1)
			{
				animbhbphspbhbp.child<Texture>("ggun").show();
				animbhbphspbhbp.child<Texture>("ggun2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("ggun").hide();
				animbhbphspbhbp.child<Texture>("ggun2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("ggun").hide();
			animbhbphspbhbp.child<Texture>("ggun2").hide();
		}
		

		animbhbphspbhbp.child<Layout>("Row").update();
		//////////////////////////////////////////////��������� ������//////////////////////////////////////////////
		if (Acom != 0)
		{
			if (Acom == 1)
			{
				animbhbphspbhbp.child<Texture>("com").show();
				animbhbphspbhbp.child<Texture>("com2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("com").hide();
				animbhbphspbhbp.child<Texture>("com2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("com").hide();
			animbhbphspbhbp.child<Texture>("com2").hide();
		}
		//--------------------------------������
		if (Araddist != 0)
		{
			if (Araddist == 1)
			{
				animbhbphspbhbp.child<Texture>("radd").show();
				animbhbphspbhbp.child<Texture>("radd2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("radd").hide();
				animbhbphspbhbp.child<Texture>("radd2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("radd").hide();
			animbhbphspbhbp.child<Texture>("radd2").hide();
		}
		//--------------------------------����������
		if (Azar != 0)
		{
			if (Azar == 1)
			{
				animbhbphspbhbp.child<Texture>("rldr").show();
				animbhbphspbhbp.child<Texture>("rldr2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("rldr").hide();
				animbhbphspbhbp.child<Texture>("rldr2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("rldr").hide();
			animbhbphspbhbp.child<Texture>("rldr2").hide();
		}
		//--------------------------------���-���
		if (Amesh_vod != 0)
		{
			if (Amesh_vod == 1)
			{
				animbhbphspbhbp.child<Texture>("drv").show();
				animbhbphspbhbp.child<Texture>("drv2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("drv").hide();
				animbhbphspbhbp.child<Texture>("drv2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("drv").hide();
			animbhbphspbhbp.child<Texture>("drv2").hide();
		}

		//--------------------------------��������
		if (Anavod != 0)
		{
			if (Anavod == 1)
			{
				animbhbphspbhbp.child<Texture>("gner").show();
				animbhbphspbhbp.child<Texture>("gner2").hide();
			}
			else
			{
				animbhbphspbhbp.child<Texture>("gner").hide();
				animbhbphspbhbp.child<Texture>("gner2").show();
			}
		}
		else
		{
			animbhbphspbhbp.child<Texture>("gner").hide();
			animbhbphspbhbp.child<Texture>("gner2").hide();
		}

		animbhbphspbhbp.child<Layout>("Row2").update();
		////////////////////////////////////////////////////////////////////////////////////////////
	}
	

	//////////////////////////////////////////////������ ��������//////////////////////////////////////////////
	void moveShells()
	{
		for (auto shell : shaders2.all())
		{
			auto vecsh = Vec2(2000.0, 0.0);
			vecsh.rotate(shell.angle());
			shell.setPos(shell.pos() + vecsh / stepn * timeDelta());
			if (!shell.box().intersects(gamepole.gameBox()))
			{
				shaders2.remove(shell);
				continue;
			}
			if (dist(shell.pos(), animhs.pos()) <= hsddos[Ahousing].diameter / 2)
			{
				int a = 0;
				shaders2.remove(shell);
				mainhp -= gddos[gun].uron;
				a = randomInt(1, 2);
				if ((a == 2) && (Aradio<2))
					Aradio++;
				continue;
			}
			else
			{
				auto sdvigvec = Vec2(hsddos[Ahousing].sdvig, 0.0);
				sdvigvec.rotate(animhsangle);
				if (dist(shell.pos(), animhs.pos() + sdvigvec) <= hsddos[Ahousing].diameter / 2)
				{
					
					shaders2.remove(shell);
					mainhp -= gddos[gun].uron * 2;
					for (int aa = 1; aa != 0;)
					{
						int a = 0;
						aa = 0;
						a = randomInt(1, 2);

						if ((a == 1) && (Araddist < 2))
							Araddist++;
						if ((a == 2) && (Amesh_vod < 2))
							Amesh_vod++;
						if ((Araddist == 2) && (Amesh_vod == 2))
							break;
					}
					
					
					for (int aa = 1; aa != 0;)
					{
						int a = 0;
						aa = 0;
						a = randomInt(1, 4);

						if ((a == 1) && (Abk < 2))
							Abk++;
						if ((a == 2) && (Adulo < 2))
							Adulo++;
						if ((a == 3) && (Atriplex < 2))
							Atriplex++;
						if ((a == 4) && (Abashnia < 2))
							Abashnia++;

						if ((a == 1) && (Abk == 2))
							aa++;
						if ((a == 2) && (Adulo == 2))
							aa++;
						if ((a == 3) && (Atriplex == 2))
							aa++;
						if ((a == 4) && (Abashnia == 2))
							aa++;
						if ((Abk == 2) && (Adulo == 2) && (Atriplex == 2) && (Abashnia == 2))
						break;
					}
					for (int aa = 1; aa != 0;)
					{
						int a = 0;
						aa = 0;
						a = randomInt(1, 2);

						if ((a == 1) && (Acom < 2))
							Acom++;
						if ((a == 2) && (Azar < 2))
							Azar++;
						if ((a == 2) && (Anavod < 2))
							Anavod++;
						if ((Anavod == 2) && (Azar == 2) && (Acom == 2))
							break;
					}
					continue;
				}
				else
				{
					if (dist(shell.pos(), animhs.pos() - sdvigvec) <= hsddos[Ahousing].diameter / 2)
					{
						
						shaders2.remove(shell);
						mainhp -= gddos[gun].uron * 3;
					
						if (Adviglo<2)
							Adviglo++;
						continue;
					}
					if (shell.box().intersects(wall1.box()) || shell.box().intersects(wall2.box()))
					{
						shaders2.remove(shell);
						continue;
					}
				}
			}
			if (dist(shell.pos(), mainhs.pos()) <= hsddos[housing].diameter / 2)
			{
				int a = 0;
				shaders2.remove(shell);
				myhp -= gddos[Agun].uron;
				a = randomInt(1, 2);
				if ((a == 2) && (radio<2))
					radio++;
				continue;
			}
			else
			{
				auto sdvigvec = Vec2(hsddos[Ahousing].sdvig, 0.0);
				sdvigvec.rotate(animhsangle);
				if (dist(shell.pos(), mainhs.pos() + sdvigvec) <= hsddos[housing].diameter / 2)
				{
					
					shaders2.remove(shell);
					myhp -= gddos[Agun].uron * 2;
					
					
					for (int aa = 1; aa != 0;)
					{
						int a = 0;
						aa = 0;
					a = randomInt(1, 4);
					if ((a == 1) && (bk<2))
						bk++;
					if ((a == 2) && (dulo<2))
						dulo++;
					if ((a == 3) && (triplex<2))
						triplex++;
					if ((a == 4) && (bashnia < 2))
						bashnia++;

					if ((a == 1) && (bk == 2))
						aa++;
					if ((a == 2) && (dulo == 2))
						aa++;
					if ((a == 3) && (triplex == 2))
						aa++;
					if ((a == 4) && (bashnia == 2))
						aa++;
					if ((bk == 2) && (dulo == 2) && (triplex == 2) && (bashnia == 2))
						break;
				}
					continue;
				}
				else
				{
					if (dist(shell.pos(), mainhs.pos() - sdvigvec) <= hsddos[housing].diameter / 2)
					{
						
						shaders2.remove(shell);
						myhp -= gddos[Agun].uron * 3;
						if (dviglo<2)
							dviglo++;
						continue;
					}
					if (shell.box().intersects(wall1.box()) || shell.box().intersects(wall2.box()))
					{
						shaders2.remove(shell);
						continue;
					}
				}
			}
		}
	}
	//////////////////////////////////////////////�������� ����������//////////////////////////////////////////////
	void moveAnim()
	{
		auto angvec = mainhs.pos() - animt.pos();
		if (dist(mainhs.pos(), animhs.pos()) > 400 && (Adviglo != 2))
		{
			auto spvec = Vec2(hsddos[Ahousing].hsspeed, 0.0);
			spvec.rotate(animhsangle);
			animhs.setPos(animhs.pos() + spvec * timeDelta());
			animt.setPos(animt.pos() + spvec * timeDelta());
			animg.setPos(animg.pos() + spvec * timeDelta());
			auto deltaGrad= abs(animhs.angle() - angvec.angle());
			bool vuchisl = false;
			if (deltaGrad > 3.1415926535897932384626433832795)
			{
				deltaGrad = 2 * 3.1415926535897932384626433832795 -deltaGrad;
				vuchisl = true;
			}
			if (deltaGrad>0.174)
			{
				if (animhs.angle() < angvec.angle()&& (!vuchisl))
				{

					auto tvec = Vec2(10.0, 0.0);
					animhsangle += 3.14 * timeDelta();
					animhs.setAngle(animhsangle);
					tvec.rotate(animhs.angle());
					animt.setPos(tvec + animhs.pos());
					auto gvec = gddos[Agun].sg + tddos[Atower].sgt;
					gvec.rotate(animt.angle());
					animg.setPos(gvec + animt.pos());
					if (animt.angle() > 3.1415926535897932384626433832795)
					{
						animt.setAngle(animt.angle() - 2 * 3.1415926535897932384626433832795);
					}
				}
				else
				{
					auto tvec = Vec2(10.0, 0.0);
					animhsangle -= 3.14 * timeDelta();
					animhs.setAngle(animhsangle);
					tvec.rotate(animhs.angle());
					animt.setPos(tvec + animhs.pos());
					auto gvec = gddos[Agun].sg + tddos[Atower].sgt;
					gvec.rotate(animt.angle());
					animg.setPos(gvec + animt.pos());
					if (animt.angle() < -3.1415926535897932384626433832795)
					{
						animt.setAngle(animt.angle() + 2 * 3.1415926535897932384626433832795);
					}
				}
			}
		}

		if (!(animt.angle() <= angvec.angle() + 0.174 && animt.angle() >= angvec.angle() - 0.174)&&(Abashnia!=2))
		{
			if (animt.angle() < angvec.angle())
			{
				animt.setAngle(animt.angle() + tddos[Atower].tfov*timeDelta());
				animg.setAngle(animg.angle() + tddos[Atower].tfov*timeDelta());
				auto gvec = gddos[Agun].sg + tddos[Atower].sgt;
				gvec.rotate(animt.angle());
				animg.setPos(gvec + animt.pos());
				if (animt.angle() > 3.1415926535897932384626433832795)
				{
					animt.setAngle(animt.angle() - 2 * 3.1415926535897932384626433832795);
				}
			}
			else
			{
				animt.setAngle(animt.angle() - tddos[Atower].tfov*timeDelta());
				animg.setAngle(animg.angle() - tddos[Atower].tfov*timeDelta());
				auto gvec = gddos[Agun].sg - tddos[Atower].sgt;
				gvec.rotate(animt.angle());
				animg.setPos(gvec + animt.pos());
				if (animt.angle() < -3.1415926535897932384626433832795)
				{
					animt.setAngle(animt.angle() + 2 * 3.1415926535897932384626433832795);
				}
			}
		}
	}

	void move()
	{
		//�������� ���������� ������ ����
		if (game == 0)
			return;
		for(int i=0;i<stepn;i++)
		moveShells();
		moveAnim();
	}

	/*float ag1;
	float tg;
	float rtm;*/

	////////////////////////////////
	LayerFromDesign(void, housing);
	LayerFromDesign(void, shaders2);
	LayerFromDesign(void, guns);
	LayerFromDesign(void, towers);
	FromDesign(GameObj, rload);
	FromDesign(GameObj, angar);
    FromDesign(GameObj, kishki_angara);
	FromDesign(GameObj, wall1);
	FromDesign(GameObj, wall2);
	////////////////////////////////

	//////// ��� ����
	float mainhsangle;
	float animhsangle;
	int tower;
	int gun;
	int housingm;
	float myhp;
	float myratio;
	GameObj mainhs;
	GameObj maint;
	GameObj maing;
	Timer shellTimer;
	float rtm;
	///////////////////////������
	int gusliy;
	int dviglo;
	int bashnia;
	int triplex;
	int dulo;
	int bk;
	int radio;
	///////////////////////������
	int com;
	int zar;
	int raddist;
	int mesh_vod;
	int navod;

	//////// ���������
	float Amainhsangle;
	int Atower;
	int Agun;
	int Ahousing;
	GameObj animhs;
	GameObj animt;
	GameObj animg;
	GameObj animbhbphspbhbp;
	GameObj mainbhbphspbhbp;
	float ratio;
	float mainhp;
	Timer AshellTimer;
	float artm;
	///////////////////////������
	int Agusliy;
	int Adviglo;
	int Abashnia;
	int Atriplex;
	int Adulo;
	int Abk;
	int Aradio;
	///////////////////////������
	int Acom;
	int Azar;
	int Araddist;
	int Amesh_vod;
	int Anavod;
	///////////////////////////////
	FromDesign(GameView, gamepole);
	LayerFromDesign(void, bhbp);

	FromDesign(Button, newgame);
	FromDesign(Button, loadgame);
	FromDesign(Button, howtoplay);
	FromDesign(Button, exit);
	FromDesign(FilledRect, blk);
	FromDesign(Layout, stolb1);

	vector<gundata> gddos;
	vector<tdata> tddos;
	vector<hsdata> hsddos;
};

int main(int argc, char** argv)
{
	MyApp app;
	app.setConfig("ProjectTankiXConfig.json");
	app.setDesign("Design.json");
	if (!app.init(&argc, argv))
		return 1;
	app.run();
	return 0;
}
