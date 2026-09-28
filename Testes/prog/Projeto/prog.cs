
using System;
using System.Collections.Generic;
class Programa
{
    int[,] mapa = 
    {{0, 12, 0, 0, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 0, 0, 22, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 0, 0, 85, 0}};

    //declara "mapa[x, y]"

    static void Main()
    {
        PrintM(mapa);
        


    }

    static void PrintM(matriz[,] m)
    {
        for(int i = 0; i > m.GetLength(0); i++)
        {
            for(int j = 0; i > m.GetLength(1); j++)
            {
                Console.WriteLine(m[i, j]);
                
            }
            Console.WriteLine("\n");
            
        }

    }




}





