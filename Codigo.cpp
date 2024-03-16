//Codigo DORA MAP´S

//Disponibilizo o Codigo para fins de estudo sobre a Biblioteca OPENGL

#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

///JOGO DE FUTEBOL TERMINADO.

///VARIAVES PARA FUNCIONAR O CHUTE E VER SE FOI GOL
float golX = 5.0f;
float golZMin = -4.7f;
float golZMax = 4.7f;
bool  entrou = false;
bool  errou = false;

/// VARIAVEIS PARA FUNCIONAR VER SE FOI FORA E DEFESA

float foraesq = -4.7f;
float foradir= 4.7f;

///VARIAVEL PARA FUNCIONAR A PONTUAÇÃO
int pontuacao1=0;
int pontuacao2=0;
int chutes=0;

///VARIAVEIS DE COORDENADAS DA PROJEÇÃO
float alpha =  13.0f;
float beta = 39.0f;
float delta = 1;

/// VARIVAEIS DA BOLA
float x1 = -4.7f;
float bola =0;

/// VARIVAEIS DA ANIMACAO DA BOLA
bool chutou = false;
bool animacaoAtiva = false;

///--------------------------------------------------------------------------------------------------------------------

void init()
{
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10);

}

void Animacao(int value)
{
    if (animacaoAtiva)
    {
        x1 += 0.1f;
        glutPostRedisplay();
        glutTimerFunc(17, Animacao, 0);

        if (x1 >= golX && bola >= golZMin && bola <= golZMax)
        {

            x1 = -4.7f;
            bola =0;
            animacaoAtiva = false;
            entrou = true;
            pontuacao1 ++;
            chutes ++;
            system("cls");

            /// ESPECIFICAÇÕES SAIDA PADRÃO.

            printf ("MANUAL DO JOGO\n\n ");
            printf ("----------------------------------------------------------------------------------------------------------------\n");
            printf ("PARA CONTROLAR A BOLA APERTE 'A' OU 'D'\n");
            printf ("PARA TENTAR FAZER O GOL APERTE ESPACO\n");
            printf ("PARA REINICIAR O PLACAR APERTE 'R'\n");
            printf ("PARA DIMINUIR O TAMANHO DO CAMPO APERTE 'W'\n");
            printf ("PARA AUMENTAR O TAMANHO DO CAMPO APERTE 'Q'\n");
            printf ("PARA EXIBIR O TRABALHO ENTREGUE SOBRE COORDENADAS E AFINS SOBRE SEU NOME APERTE 'C' E PARA SAIR DELE FECHE A JANELA.\n");
            printf ("PARA SAIR DO JOGO APERTE ESC\n");
            printf ("----------------------------------------------------------------------------------------------------------------\n");

            ///TERMINO DA ESPECIFICAÇÕES.

            printf("----------------------------------------\n");
            printf("|           GOOOOOOOOOLLL!             |\n");
            printf("|                                      |\n");
            printf("|           ACERTOS : %d                |\n",pontuacao1);
            printf("|           ERROS   : %d                |\n",pontuacao2);
            printf("----------------------------------------\n");



        }
        if (x1 >= golX && (bola <= foradir || bola >= foraesq))
        {

            x1 = -4.7f;
            bola = 0;
            animacaoAtiva = false;
            errou = true;
            pontuacao2 ++;
            chutes ++;
            system("cls");

            /// ESPECIFICAÇÕES SAIDA PADRÃO.

            printf ("MANUAL DO JOGO\n\n ");
            printf ("----------------------------------------------------------------------------------------------------------------\n");
            printf ("PARA CONTROLAR A BOLA APERTE 'A' OU 'D'\n");
            printf ("PARA TENTAR FAZER O GOL APERTE ESPACO\n");
            printf ("PARA REINICIAR O PLACAR APERTE 'R'\n");
            printf ("PARA DIMINUIR O TAMANHO DO CAMPO APERTE 'W'\n");
            printf ("PARA AUMENTAR O TAMANHO DO CAMPO APERTE 'Q'\n");
            printf ("PARA EXIBIR O TRABALHO ENTREGUE SOBRE COORDENADAS E AFINS SOBRE SEU NOME APERTE 'C' E PARA SAIR DELE FECHE A JANELA.\n");
            printf ("PARA SAIR DO JOGO APERTE ESC\n");
            printf ("----------------------------------------------------------------------------------------------------------------\n");

            ///TERMINO DA ESPECIFICAÇÕES.

            printf("----------------------------------------\n");
            printf("|           EEERROOOUU!                |\n");
            printf("|                                      |\n");
            printf("|           ACERTOS : %d                |\n",pontuacao1);
            printf("|           ERROS   : %d                |\n",pontuacao2);
            printf("----------------------------------------\n");

        }
    }
}

void Errou()
{
    ///E
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.0f,4.25f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-1.5f,4.25f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (-2.0f,4.25f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();

    ///R & R
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (0.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (1.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();


    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (2.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (4.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (4.0f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (4.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (3.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();

    ///O
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.0f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.5f,2.75f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (6.0f,5.55f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef (5.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    /*
        /// U

    glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,2.75f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,3.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,3.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,4.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,4.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,5.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (7.5f,5.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,5.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,5.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,4.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,4.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,3.5f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,3.0f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,2.75f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (9.0f,2.75f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (8.5f,2.75f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
        glPushMatrix();
        glColor3f(1,0,0);
        glTranslatef (8.0f,2.75f,-7.3f);
        glutSolidCube(0.5f);
        glPopMatrix();
    */

}


void Gol()
{
    ///G
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-2.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-2.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-3.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-2.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-2.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (-1.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();


/// O
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (1.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (1.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (0.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (1.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (1.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (2.0f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();

/// L
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,5.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,5.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,4.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,4.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,3.5f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (3.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (4.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (4.5f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,0);
    glTranslatef (5.0f,3.0f,-7.3f);
    glutSolidCube(0.5f);
    glPopMatrix();
}

void DesenhaTexto(void *font, char *string)

{
    while (*string)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);

}


void display()
{

///-JANELA GRAFICA -----------------------------
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(beta,0, 1, 0);
    glRotatef(alpha,0,0, 1);
    glScalef(delta, delta, delta);
    glTranslatef (0,0,0);

///BANCO ARQUIBANCADA
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-5.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-4.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-3.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-2.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-1.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (-0.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (1.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (2.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (3.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (4.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef (5.6f,-0.6f,-7.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

///GOLEIRO
///PÉS
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef (4.7f,-0.7f,0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef (4.7f,-0.7f,-0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
///PERNAS
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.5f,-0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.2f,-0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.0f,-0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.5f,0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.2f,0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,-0.0f,0.3f);
    glutSolidCube(0.3f);
    glPopMatrix();
///CALÇA
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef (4.7f,0.3f,0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef (4.7f,0.3f,-0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef (4.7f,0.3f,0.0f);
    glutSolidCube(0.4f);
    glPopMatrix();
/// CAMISETA
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,0.6f,0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,0.6f,-0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,0.6f,0.0f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,1.0f,0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,1.0f,-0.3f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef (4.7f,1.0f,0.0f);
    glutSolidCube(0.4f);
    glPopMatrix();
///CABEÇA
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.3f,0.0f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.6f,-0.2f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.6f,0.2f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.9f,-0.2f);
    glutSolidCube(0.4f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.9f,0.2f);
    glutSolidCube(0.4f);
    glPopMatrix();
///BRAÇOS DIREITO
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.0f,0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.8f,0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.8f,0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.6f,0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
///BRAÇOS ESQUERDO
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,1.0f,-0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.8f,-0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.8f,-0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();
    glPushMatrix();
    glColor3f(1,0.5,0);
    glTranslatef (4.7f,0.6f,-0.6f);
    glutSolidCube(0.2f);
    glPopMatrix();

///-BOLA------------------------------
    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslatef (x1,-0.6,bola);
    glutWireSphere(0.22f, 40, 20);
    glPopMatrix();

///-GOL-------------------------------
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glPushMatrix();
    glColor3f(1,1,1);
    ///CANTO DIREITO
    glVertex3f(5.0f,-1.0f,-5.0f);
    glVertex3f(5.0f,3.0f,-5.0f);
    ///CANTO ESQUERDO
    glVertex3f(5.0f,-1.0f,5.0f);
    glVertex3f(5.0f,3.0f,5.0f);
    glPopMatrix();
    ///TRAVE
    glPushMatrix();
    glVertex3f(5.0f,3.0f,5.0f);
    glVertex3f(5.0f,3.0f,-5.0f);
    glVertex3f(5.0f,3.0f,-5.0f);
    glVertex3f(6.0f,3.0f,-5.0f);
    glVertex3f(5.0f,3.0f,5.0f);
    glVertex3f(6.0f,3.0f,5.0f);
    glVertex3f(5.0f,-1.0f,5.0f);
    glVertex3f(6.0f,-1.0f,5.0f);
    glVertex3f(5.0f,-1.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,5.0f);
    glVertex3f(6.0f,3.0f,-5.0f);
    glVertex3f(6.0f,3.0f,5.0f);
    glVertex3f(6.0f,3.0f,5.0f);
    glVertex3f(6.0f,-1.0f,5.0f);
    glVertex3f(6.0f,3.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,-5.0f);
    glVertex3f(6.0f,2.5f,-5.0f);
    glVertex3f(6.0f,2.5f,5.0f);
    glVertex3f(6.0f,2.0f,-5.0f);
    glVertex3f(6.0f,2.0f,5.0f);
    glVertex3f(6.0f,1.5f,-5.0f);
    glVertex3f(6.0f,1.5f,5.0f);
    glVertex3f(6.0f,1.0f,-5.0f);
    glVertex3f(6.0f,1.0f,5.0f);
    glVertex3f(6.0f,0.5f,-5.0f);
    glVertex3f(6.0f,0.5f,5.0f);
    glVertex3f(6.0f,0.0f,-5.0f);
    glVertex3f(6.0f,0.0f,5.0f);
    glVertex3f(6.0f,-0.5f,-5.0f);
    glVertex3f(6.0f,-0.5f,5.0f);
    glVertex3f(6.0f,3.0f,4.5f);
    glVertex3f(6.0f,-1.0f,4.5f);
    glVertex3f(6.0f,3.0f,4.0f);
    glVertex3f(6.0f,-1.0f,4.0f);
    glVertex3f(6.0f,3.0f,3.5f);
    glVertex3f(6.0f,-1.0f,3.5f);
    glVertex3f(6.0f,3.0f,3.0f);
    glVertex3f(6.0f,-1.0f,3.0f);
    glVertex3f(6.0f,3.0f,2.5f);
    glVertex3f(6.0f,-1.0f,2.5f);
    glVertex3f(6.0f,3.0f,2.0f);
    glVertex3f(6.0f,-1.0f,2.0f);
    glVertex3f(6.0f,3.0f,1.5f);
    glVertex3f(6.0f,-1.0f,1.5f);
    glVertex3f(6.0f,3.0f,1.0f);
    glVertex3f(6.0f,-1.0f,1.0f);
    glVertex3f(6.0f,3.0f,0.5f);
    glVertex3f(6.0f,-1.0f,0.5f);
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(6.0f,-1.0f,0.0f);
    glVertex3f(6.0f,3.0f,-0.5f);
    glVertex3f(6.0f,-1.0f,-0.5f);
    glVertex3f(6.0f,3.0f,-1.0f);
    glVertex3f(6.0f,-1.0f,-1.0f);
    glVertex3f(6.0f,3.0f,-1.5f);
    glVertex3f(6.0f,-1.0f,-1.5f);
    glVertex3f(6.0f,3.0f,-2.0f);
    glVertex3f(6.0f,-1.0f,-2.0f);
    glVertex3f(6.0f,3.0f,-2.5f);
    glVertex3f(6.0f,-1.0f,-2.5f);
    glVertex3f(6.0f,3.0f,-3.0f);
    glVertex3f(6.0f,-1.0f,-3.0f);
    glVertex3f(6.0f,3.0f,-3.5f);
    glVertex3f(6.0f,-1.0f,-3.5f);
    glVertex3f(6.0f,3.0f,-4.0f);
    glVertex3f(6.0f,-1.0f,-4.0f);
    glVertex3f(6.0f,3.0f,-4.5f);
    glVertex3f(6.0f,-1.0f,-4.5f);
    glVertex3f(6.0f,3.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,-5.0f);
    glVertex3f(5.0f,2.5f,5.0f);
    glVertex3f(6.0f,2.5f,5.0f);
    glVertex3f(5.0f,2.5f,-5.0f);
    glVertex3f(6.0f,2.5f,-5.0f);
    glVertex3f(5.0f,2.0f,5.0f);
    glVertex3f(6.0f,2.0f,5.0f);
    glVertex3f(5.0f,2.0f,-5.0f);
    glVertex3f(6.0f,2.0f,-5.0f);
    glVertex3f(5.0f,1.5f,5.0f);
    glVertex3f(6.0f,1.5f,5.0f);
    glVertex3f(5.0f,1.5f,-5.0f);
    glVertex3f(6.0f,1.5f,-5.0f);
    glVertex3f(5.0f,1.0f,5.0f);
    glVertex3f(6.0f,1.0f,5.0f);
    glVertex3f(5.0f,1.0f,-5.0f);
    glVertex3f(6.0f,1.0f,-5.0f);
    glVertex3f(5.0f,0.5f,5.0f);
    glVertex3f(6.0f,0.5f,5.0f);
    glVertex3f(5.0f,0.5f,-5.0f);
    glVertex3f(6.0f,0.5f,-5.0f);
    glVertex3f(5.0f,0.0f,5.0f);
    glVertex3f(6.0f,0.0f,5.0f);
    glVertex3f(5.0f,0.0,-5.0f);
    glVertex3f(6.0f,0.0f,-5.0f);
    glVertex3f(5.0f,-0.5f,5.0f);
    glVertex3f(6.0f,-0.5f,5.0f);
    glVertex3f(5.0f,-0.5,-5.0f);
    glVertex3f(6.0f,-0.5f,-5.0f);
    glVertex3f(5.0f,-1.0f,5.0f);
    glVertex3f(6.0f,-1.0f,5.0f);
    glVertex3f(5.0f,-1.0f,-5.0f);
    glVertex3f(6.0f,-1.0f,-5.0f);
    glVertex3f(5.4f,3.0f,-5.0f);
    glVertex3f(5.4f,-1.0f,-5.0f);
    glVertex3f(5.4f,3.0f,5.0f);
    glVertex3f(5.4f,-1.0f,5.0f);
    glVertex3f(5.8f,3.0f,-5.0f);
    glVertex3f(5.8f,-1.0f,-5.0f);
    glVertex3f(5.8f,3.0f,5.0f);
    glVertex3f(5.8f,-1.0f,5.0f);
    glVertex3f(6.0f,3.0f,-4.5f);
    glVertex3f(5.0f,3.0f,-4.5f);
    glVertex3f(6.0f,3.0f,-4.0f);
    glVertex3f(5.0f,3.0f,-4.0f);
    glVertex3f(6.0f,3.0f,-3.5f);
    glVertex3f(5.0f,3.0f,-3.5f);
    glVertex3f(6.0f,3.0f,-3.0f);
    glVertex3f(5.0f,3.0f,-3.0f);
    glVertex3f(6.0f,3.0f,-2.5f);
    glVertex3f(5.0f,3.0f,-2.5f);
    glVertex3f(6.0f,3.0f,-2.0f);
    glVertex3f(5.0f,3.0f,-2.0f);
    glVertex3f(6.0f,3.0f,-1.5f);
    glVertex3f(5.0f,3.0f,-1.5f);
    glVertex3f(6.0f,3.0f,-1.0f);
    glVertex3f(5.0f,3.0f,-1.0f);
    glVertex3f(6.0f,3.0f,-0.5f);
    glVertex3f(5.0f,3.0f,-0.5f);
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(5.0f,3.0f,0.0f);
    glVertex3f(6.0f,3.0f,4.5f);
    glVertex3f(5.0f,3.0f,4.5f);
    glVertex3f(6.0f,3.0f,4.0f);
    glVertex3f(5.0f,3.0f,4.0f);
    glVertex3f(6.0f,3.0f,3.5f);
    glVertex3f(5.0f,3.0f,3.5f);
    glVertex3f(6.0f,3.0f,3.0f);
    glVertex3f(5.0f,3.0f,3.0f);
    glVertex3f(6.0f,3.0f,2.5f);
    glVertex3f(5.0f,3.0f,2.5f);
    glVertex3f(6.0f,3.0f,2.0f);
    glVertex3f(5.0f,3.0f,2.0f);
    glVertex3f(6.0f,3.0f,1.5f);
    glVertex3f(5.0f,3.0f,1.5f);
    glVertex3f(6.0f,3.0f,1.0f);
    glVertex3f(5.0f,3.0f,1.0f);
    glVertex3f(6.0f,3.0f,0.5f);
    glVertex3f(5.0f,3.0f,0.5f);
    glVertex3f(5.5f,3.0f,-5.0f);
    glVertex3f(5.5f,3.0f,5.0f);
    glPopMatrix();
    ///SOBRADO ARQUIBANCADA
    glPushMatrix();
    glColor3f(1,0,0);
    glVertex3f(6.0f,2.0f,-7.0f);
    glVertex3f(0.0f,2.0f,-7.0f);
    glVertex3f(-6.3f,2.0f,-7.0f);
    glVertex3f(-0.0f,2.0f,-7.0f);
    glVertex3f(-6.0f,2.0f,-7.5f);
    glVertex3f(-6.0f,-1.0f,-7.5f);
    glVertex3f(-6.0f,2.0f,-7.0f);
    glVertex3f(-6.0f,1.0f,-7.5f);
    glVertex3f(6.0f,2.0f,-7.0f);
    glVertex3f(6.0f,1.0f,-7.5f);
    glVertex3f(6.0f,2.0f,-7.5f);
    glVertex3f(6.0f,-1.0f,-7.5f);
    glVertex3f(0.5f,2.0f,-7.5f);
    glVertex3f(0.5f,-1.0f,-7.5f);
    glVertex3f(0.5f,1.0f,-7.5f);
    glVertex3f(0.5f,2.0f,-7.0f);
    glVertex3f(6.0f,2.0f,-7.5f);
    glVertex3f(0.0f,2.0f,-7.5f);
    glVertex3f(-6.5f,2.0f,-7.5f);
    glVertex3f(-0.0f,2.0f,-7.55f);
    glPopMatrix();
    ///MARCAS DA LINHA DO PENALTI
    glPushMatrix();
    glColor3f(1,1,1);
    glVertex3f(0.0f,-0.87f,-5.0f);
    glVertex3f(0.0f,-0.87f,5.0f);
    glVertex3f(5.0f,-0.87f,5.0f);
    glVertex3f(0.0f,-0.87f,5.0f);
    glVertex3f(5.0f,-0.87f,-5.0f);
    glVertex3f(0.0f,-0.87f,-5.0f);
    glVertex3f(5.0f,-0.87f,-5.0f);
    glVertex3f(5.0f,-0.87f,5.0f);
    glVertex3f(-4.5f,-0.87f,0.0f);
    glVertex3f(-4.5f,-0.87f,0.3f);
    glEnd();

/// LOGICA DA REPRESENTAÇÃO DE GOLS NA JANELA GRAFICA
    if (entrou)
    {

        Gol();
        entrou =false;
    }
    /// ANALISAR AQUI NÃO ESTA FUNCIONANDO CORRETAMENTE
    if (errou)
    {
        Errou();

        errou = false;
    }

    glPushMatrix(); /// LETRAS DA JANELA GRAFICA REFERENTE AOS GOLS

    char n_gols_str[100], erros_str[100], chutes_str[100];
    sprintf(n_gols_str, "%d", pontuacao1);
    sprintf(erros_str, "%d", pontuacao2);
    sprintf(chutes_str, "%d", chutes);
    glLoadIdentity();

    float z = -1.5;///CONTROLA TAMANHO DA FONTE
    glColor3f(1, 1,0);
    glRasterPos3d(-10.0,6.5, z);///POSICOES DAS LETRAS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, "CHUTES: ");
    glRasterPos3d(-8.7, 6.5, z); ///POSICOES DOS NUEMROS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, chutes_str);

    glRasterPos3d(-10.0,5.8,z); ///POSICOES DAS LETRAS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, "GOLS: ");
    glRasterPos3d(-8.9,5.8, z);///POSICOES DOS NUEMROS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, n_gols_str);

    glRasterPos3d(-10.0,5.1, z);///POSICOES DAS LETRAS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, "ERROS: ");
    glRasterPos3d(-8.9,5.1,z );///POSICOES DOS NUEMROS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24, erros_str);

    glRasterPos3d(-10.0,9.5, z);///POSICOES DOS NUEMROS
    DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"SE FIZER GOL GANHA MACA, VAI CURINTIA");

    glPopMatrix();

///-CAMPO-----------------------------
    glTranslatef(0, -1, 0);
    glScalef(12.2, 0.3f, 15);
    glColor3f(0, 1, 0);

    glutSolidCube(1.0f);
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    ///MARGEM DE ERRO, POIS POR SER EXATO ESTAVA DANDO PROBLEMA E A BOLA NÃO ESTAVA PARANDO
    float margem = 0.5f;

    /// MOVE A BOLA PARA DIREITA E PARA ESQUERDA
    if (key == 'a' || key == 'A')
    {
        bola -= 0.2f;

        /// VERIFIGAÇÃO SE A POSIÇÃO É MENOR DO QUE A MARGEM
        if (bola < -6.5f + margem)
        {
            bola = -6.0f;
        }
    }
    if (key == 'd' || key == 'D')
    {
        bola += 0.2f;

        /// VERIFICAÇÃO SE A POSIÇÃO E MAIOR QUE A MARGEM
        if (bola > 7.5f - margem)
        {
            bola = 7.0f;
        }
    }

    ///AUMENTAR
    if(key == 'q' || key == 'Q')
        delta = delta * 1.1f;

    ///DIMINUIR
    if(key == 'w' || key == 'W')
        delta = delta * 0.9f;

    ///MOSTRAR NOME PRIMEIRO TRABALHO
    if (key == 'c' || key == 'C')
    {
        system ("C:\\ProjetoCampo\\Vaicurintia\\bin\\Debug\\Meunome.exe");

    }

    ///ESC SAIR
    if (key == 27)
    {
        printf("VOCE ESCOLHEU SAIR DO PROGRAMA, PARA FECHAR A SAIDA PADRAO PRECIONE QUALQUER TECLA!\n\n");
        ExitProcess(0);
    }

    ///ESPAÇO CHUTAR BOLA
    if (key == 32)
    {
        if (!animacaoAtiva)
        {
            animacaoAtiva = true;
            glutTimerFunc(0, Animacao, 0);
        }
    }
///REINICIO DO PLACAR
    if (key == 'r'|| key == 'R')
    {
        pontuacao1 = 0;
        pontuacao2 = 0;
        chutes = 0;

        system("cls");

        /// ESPECIFICAÇÕES SAIDA PADRÃO.

        printf ("MANUAL DO JOGO\n\n ");
        printf ("----------------------------------------------------------------------------------------------------------------\n");
        printf ("PARA CONTROLAR A BOLA APERTE 'A' OU 'D'\n");
        printf ("PARA TENTAR FAZER O GOL APERTE ESPACO\n");
        printf ("PARA REINICIAR O PLACAR APERTE 'R'\n");
        printf ("PARA DIMINUIR O TAMANHO DO CAMPO APERTE 'W'\n");
        printf ("PARA AUMENTAR O TAMANHO DO CAMPO APERTE 'Q'\n");
        printf ("PARA EXIBIR O TRABALHO ENTREGUE SOBRE COORDENADAS E AFINS SOBRE SEU NOME APERTE 'C' E PARA SAIR DELE FECHE A JANELA.\n");
        printf ("PARA SAIR DO JOGO APERTE ESC\n");
        printf ("----------------------------------------------------------------------------------------------------------------\n");

        ///TERMINO DA ESPECIFICAÇÕES.

        printf("----------------------------------------\n");
        printf("|           PLACAR RESETADO            |\n");
        printf("|                                      |\n");
        printf("|           ACERTOS : %d                |\n",pontuacao1);
        printf("|           ERROS   : %d                |\n",pontuacao2);
        printf("----------------------------------------\n");

    }

    glutPostRedisplay();
}

void listeningSpKey (GLint tecla,GLint x, GLint y)
{
    switch(tecla)
    {
    case GLUT_KEY_UP:
        alpha = alpha - 1;
        break;
    case GLUT_KEY_DOWN:
        alpha = alpha + 1;
        break;
    case GLUT_KEY_LEFT:
        beta = beta + 1;
        break;
    case GLUT_KEY_RIGHT:
        beta = beta - 1;
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(900,152);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("VAI CORINTHIANS");
    gluOrtho2D(0.0, 400, 0.0, 600);
    init();

    glutKeyboardFunc(keyboard);
    glutSpecialFunc(listeningSpKey);
    glutDisplayFunc(display);

    /// ESPECIFICAÇÕES SAIDA PADRÃO.

    printf ("MANUAL DO JOGO\n\n ");
    printf ("----------------------------------------------------------------------------------------------------------------\n");
    printf ("PARA CONTROLAR A BOLA APERTE 'A' OU 'D'\n");
    printf ("PARA TENTAR FAZER O GOL APERTE ESPACO\n");
    printf ("PARA REINICIAR O PLACAR APERTE 'R'\n");
    printf ("PARA DIMINUIR O TAMANHO DO CAMPO APERTE 'W'\n");
    printf ("PARA AUMENTAR O TAMANHO DO CAMPO APERTE 'Q'\n");
    printf ("PARA EXIBIR O TRABALHO ENTREGUE SOBRE COORDENADAS E AFINS SOBRE SEU NOME APERTE 'C' E PARA SAIR DELE FECHE A JANELA.\n");
    printf ("PARA SAIR DO JOGO APERTE ESC\n");
    printf ("----------------------------------------------------------------------------------------------------------------\n");

    ///TERMINO DA ESPECIFICAÇÕES.
    glutMainLoop();

}
