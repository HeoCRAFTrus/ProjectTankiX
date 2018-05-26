#pragma once
void levelGen(Layer<void> clay, Layer<void> shaders1, Layer<void> baricades)
{
	for (int i = 0; i < 100; i++)
	{
		clay.load("clay.json", randomInt(-10000, 10000), randomInt(-10000, 10000)).setAngle(randomFloat()*6.28);
	}
	for (int i = 0; i < 1000; i++)
	{
		shaders1.load("bush1.json", randomInt(-10000, 10000), randomInt(-10000, 10000)).setAngle(randomFloat()*6.28);
	}
	int forestX = randomInt(-5000, -4500);
	int forestY = randomInt (- 5000, -4500);
	/*for (int i = 0; i < 500; i++)
	{
		baricades.load("fir.json", randomInt(-1000+ forestX, 1000+forestX), randomInt(-1000+ forestY, 1000 + forestY)).setAngle(randomFloat()*6.28);
	}*/
	/*for (int i = 0; i < 500; i++)
	{
		baricades.load("oak.json", randomInt(-10000, 10000), randomInt(-10000, 10000)).setAngle(randomFloat()*6.28);
	}
	*/
	/*for (int i = 0; i < 250; i++)
	{
		baricades.load("Berch.json", randomInt(-1000 + forestX, 1000 + forestX), randomInt(-1000 + forestY, 1000 + forestY)).setAngle(randomFloat()*6.28);
	}*/
	for (auto bush1 : shaders1.all())
	{
		if (!clay.find(bush1.box()).empty())
		{
			shaders1.remove(bush1);
		}

	}
	
	baricades.load("house1.json", 500, 500);
}
