# Campo de Futebol OpenGL

Mini jogo de pênaltis em 3D com OpenGL/GLUT, desenvolvido na disciplina de Modelagem 3D. O jogador controla a bola e tenta marcar contra um goleiro, em um estádio com arquibancada.

## Funcionalidades

- Placar com chutes, gols e erros
- Mensagens "GOL" e "ERRO" desenhadas na cena e no console
- Câmera rotacionável e zoom do campo

## Controles

| Tecla | Ação |
|---|---|
| `A` / `D` | Move a bola para a esquerda / direita |
| `Espaço` | Chuta |
| `R` | Reinicia o placar |
| `Q` / `W` | Aumenta / diminui o campo |
| Setas | Rotacionam a câmera |
| `Esc` | Sai |

## Tecnologias

- C++
- OpenGL / GLUT

## Compilar e executar

O código usa chamadas específicas do Windows (`system("cls")` e `ExitProcess`). Exemplo com MinGW e freeglut:

```bash
g++ Codigo.cpp -o campo -lfreeglut -lopengl32 -lglu32
./campo
```

## Capturas

![Jogo em ação](https://github.com/kleberson56/Campo-de-Futebol-OPENGL/assets/132021267/7d2d6d19-6b72-4a98-abec-c23762bf28f4)
![Gol](https://github.com/kleberson56/Campo-de-Futebol-OPENGL/assets/132021267/399944ae-9a8d-48f6-8fe7-17c3c5f177d5)
