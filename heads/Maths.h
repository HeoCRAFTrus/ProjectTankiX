#pragma once
bool VecIntersection(Layer<Vec2> shaders2, GameObj mainhs, GameObj shell)
{
    //////////////////////////////////////проверка на рикошет, непробитие и попадание в гусеницу///////////
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    float k1 = 0, k2 = 0, b1 = 0, b2 = 0;
    float x3 = 0, x4 = 0, y3 = 0, y4 = 0;
    x2 = shaders2.data(shell).x;
    y2 = shaders2.data(shell).y;
    x1 = shell.pos().x;
    y1 = shell.pos().y;
    k1 = (y2 - y1) / (x2 - x1);
    b1 = y1 - (k1*x1);
    Vec2 p3(32, 16);
    p3.rotate(mainhs.angle());
    p3 += mainhs.pos();
    x3 = p3.x;
    y3 = p3.y;
    Vec2 p4(-32, 16);
    p4.rotate(mainhs.angle());
    p4 += mainhs.pos();
    x4 = p4.x;
    y4 = p4.y;
    k2 = (y4 - y3) / (x4 - x3);
    b2 = y3 - (k2*x3);
    float x5 = 0, y5 = 0;
    x5 = (b1 - b2) / (k2 - k1);
    y5 = k1*x5 + b1;
    if (x2 < x5 && x5 < x1)

        cout << "x1: " << x1 << "y1: " << y1
        << "x2: " << x2 << "y2: " << y2
        << "x3: " << x3 << "y3: " << y3
        << "x4: " << x4 << "y4: " << y4
        << "x5: " << x5 << "y5: " << y5 << endl;
    if (((x1 < x5) && (x2 < x5)) || ((x1 > x5) && (x2 > x5))|| ((x3 < x5) && (x4 < x5)) || ((x3 > x5) && (x4 > x5)))
    {
        return (false);
    }
    else
    {
        cout << "x1: " << x1 << "y1: " << y1
            << "x2: " << x2 << "y2: " << y2
            << "x3: " << x3 << "y3: " << y3
            << "x4: " << x4 << "y4: " << y4
            << "x5: " << x5 << "y5: " << y5 << endl;
        return (true);
    }
}