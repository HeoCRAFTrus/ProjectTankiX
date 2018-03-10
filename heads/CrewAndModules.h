#pragma once
void OurCrewModules(int & bk , int & com, int & raddist, int & zar, int & mesh_vod, int & navod, int & dviglo, int & radio, int & triplex, int & gusliy, int & bashnia, int & dulo, GameObj mainbhbphspbhbp)
{
    //////////////////////////////////////////////наш экипаж//////////////////////////////////////////////
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
    //--------------------------------радист
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
    //--------------------------------заряжающий
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
    //--------------------------------мех-вод
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

    //--------------------------------наводчик
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

    //////////////////////////////////////////////наши модули//////////////////////////////////////////////
    //--------------------------------двигатель
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
    //--------------------------------радио
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
    //--------------------------------триплекс
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
    //--------------------------------гусеница
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
    //--------------------------------боеукладка
    if (bk == 1)
    {
        mainbhbphspbhbp.child<Texture>("bk").show();
    }
    else
    {
        mainbhbphspbhbp.child<Texture>("bk").hide();
    }
    //--------------------------------башня
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
    //--------------------------------дуло
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
}

void TheirCrewModules(int & Abk, int & Acom, int & Araddist, int & Azar, int & Amesh_vod, int & Anavod, int & Adviglo, int & Aradio, int & Atriplex, int & Agusliy, int & Abashnia, int & Adulo, GameObj animbhbphspbhbp)
{
    //////////////////////////////////////////////вражеские модули//////////////////////////////////////////////
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
    //--------------------------------радио
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
    //--------------------------------триплекс
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
    //--------------------------------гусеница
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
    //--------------------------------боеукладка
    if (Abk == 1)
    {
        animbhbphspbhbp.child<Texture>("bk").show();
    }
    else
    {
        animbhbphspbhbp.child<Texture>("bk").hide();
    }
    //--------------------------------башня
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
    //--------------------------------дуло
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
    //////////////////////////////////////////////вражиский экипаж//////////////////////////////////////////////
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
    //--------------------------------радист
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
    //--------------------------------заряжающий
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
    //--------------------------------мех-вод
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

    //--------------------------------наводчик
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

}