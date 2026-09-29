using System;
using System.Collections.Generic;

namespace Grid
{
    class Program
    {
        int[,] mapa = 
        {{0, 12, 0, 0, 0}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 22, 0}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 85, 0}};

        int playercode = 1101001;
        int pBlockVal;

        int[] pPos = {1, 1}; //posição do jogador nova
        int[] pPosAnt = new int[2];

        string resp;

        static void Main()
        {
            Program inst = new Program();
            inst.sistema();
            //colocando player no mundo
            
        }

        public void sistema()
        {
            pBlockVal = mapa[1,1]; 
            mapa[pPos[0], pPos[1]] = playercode;
            PrintM(mapa);
            PMove();
            AtualizePos();

        }

        public void PMove()
        {
            ret:
            Console.WriteLine("1-esquerda, 2-frente, 3-direita, 4-tras");
            resp = Console.ReadLine();
            pPosAnt[0] = pPos[0];
            pPosAnt[1] = pPos[1];
            if(resp == "1")
            {
                if(CanMove(-1, 0))
                {
                    pPos[0] += -1;
                }
                else
                {
                    goto ret;
                }
            
            }
            else if(resp == "2")
            {
                if(CanMove(0, 1))
                {
                    pPos[1] += 1;
                }
                else
                {
                    goto ret;
                }
                
            }
            else if(resp == "3")
            {
                if(CanMove(1, 0))
                {
                    pPos[0] += 1;
                }
                else
                {
                    goto ret;
                }
                
            }
            else if(resp == "4")
            {
                if(CanMove(0, -1))
                {
                    pPos[1] -= 1;
                }
                else
                {
                    goto ret;
                }
                
            }
            else
            {
                Console.WriteLine("Valor invalido, digite outro valor");
                goto ret;
            }


        }

        public bool CanMove(int x,int y) //colocar o valor do movimento (+1, -1)
        {
            if(pPosAnt[0] == 0 && x == -1)
            {
                return false;
            }
            else if(pPosAnt[0] == mapa.GetLength(0) - 1 && x == 1)
            {
                return false;
            }
            else if(pPosAnt[1] == 0 && y == -1)
            {
                return false;
            }
            else if(pPosAnt[1] == mapa.GetLength(1) - 1 && y == 1)
            {
                return false;
            }
            else
            {
                return true;
            }


        }

        public void AtualizePos()
        {
            mapa[pPosAnt[0], pPosAnt[1]] = pBlockVal; //apaga a pos interior do player
            pBlockVal = mapa[pPos[0], pPos[1]]; //escreve a o valor abaixo do player
            mapa[pPos[0], pPos[1]] = playercode; //coloca o player na nova posição
            PrintM(mapa);


            
        }





        public void PrintM(int[,] m)
        {

            for(int i = 0; i <= m.GetLength(0) - 1; i++)
            {
                for(int j = 0; j < m.GetLength(1) - 1; j++)
                {

                    Console.Write(m[i, j] + " ");
                    
                }

                Console.Write("\n");
            }

        }




    }
}