#pragma once
void levelGen(Layer<void> clay, Layer<void> shaders1)
{
    for (int i = 0; i < 100; i++)
    {
        clay.load("clay.json", randomInt(-10000, 10000), randomInt(-10000, 10000)).setAngle(randomFloat()*6.28);
    }
    for (int i = 0; i < 1000; i++)
    {
        shaders1.load("bush1.json", randomInt(-10000, 10000), randomInt(-10000, 10000)).setAngle(randomFloat()*6.28);
    }
    for (auto bush1 : shaders1.all())
    {
        if (!clay.find(bush1.box()).empty())
        {
            shaders1.remove(bush1);
        }

    }
}
