#include <mainPage.h>

String webcode(String red[], int counter)
{
    String page = "<!DOCTYPE html><html><head>";
    page += "<title>Local network</title>";

    page += "<style>";
    page += "body {margin-top:50px; font-family:Arial;";
    page += "font-size:20px; text-align:center}";
    page += ".playButton {background-color: #4CAF50; border: none; color: white; width: 100%; height: 100px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".stopButton {background-color: #EB4034; border: none; color: white; width: 100%; height: 100px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".volumeUp   {background-color: #3486EB; border: none; color: white; width: 50%;  height: 100px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".volumeDown {background-color: #3486EB; border: none; color: white; width: 50%;  height: 100px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".selection  {background-color: #D234EB; border: none; color: white; width: 100%; height: 250px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".entradas {width: 100%; height: 100px; padding: 0; font-size: 50px}";
    page += ".formulario {font-size: 50px}";
    page += "p {font-size:40px; margin-top:50px;";
    page += "margin-bottom:5px;}";
    page += "</style></head>";

    page += "<body>";
    page += "<h1>Selecciona tu timbre - ESP01</h1><br>";
    // https://developer.mozilla.org/es/docs/Learn/Forms/Your_first_form
    page += "<h3>Recorra las canciones y seleccione una para que sea su timbre.</h3><br><br>";

    page += "<a href=\"/reproducirCancion\"><button class=\"playButton\">Reproducir</button></a><hr>";
    page += "<a href=\"/subirVolumen\"><button class=\"volumeUp\">Volumen UP</button></a><hr>";
    page += "<a href=\"/bajarVolumen\"><button class=\"volumeDown\">Volumen DOWN</button></a><hr>";
    page += "<a href=\"/detenerCancion\"><button class=\"stopButton\">Stop</button></a><hr>";
    page += "<a href=\"/seleccionarCancion\"><button class=\"selection\">Seleccionar</button></a><hr>";

    /*for (int i = 0; i < counter; i ++)
    {
        page += "<p>" + red [i] + "</p>";
    }*/

    page += "</body></html>";
    return page;
}

String mensajeCarga(void)
{
    String page = "<!DOCTYPE html><html><head>";
    page += "<title>Local network</title>";

    page += "<style>";
    page += "body {margin-top:50px; font-family:Arial;";
    page += "font-size:20px; text-align:center}";
    page += ".btn {display:block; width:220px;";
    page += "margin:auto; padding:30px}";
    page += ".button {background-color: #4CAF50; border: none; color: white; width: 100%; height: 100px; padding: 0; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}";
    page += ".on {background-color:SkyBlue}";
    page += ".off {background-color:LightSteelBlue}";
    page += ".zero {background-color:Thistle}";
    page += "td {font-size:30px; margin-top:50px;";
    page += "margin-bottom:5px}";
    page += "p {font-size:30px; margin-top:50px;";
    page += "margin-bottom:5px}";
    page += "</style>";
    // En este punto estoy embebiendo un script de js. emoroni.
    page += "<script>";
    page += "setInterval(myTimer, 5000);";
    page += "function myTimer() { location.href=\"/\"; }";
    page += "</script></head>";

    page += "<body>";
    page += "<h1>Cancion seleccionada...</h1><br>";

    page += "</body></html>";
    return page;
}