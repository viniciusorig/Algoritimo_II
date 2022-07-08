import pygame                                                         #importando as bibliotecas que vão ser inicializadas
import time
import random
 
pygame.init()                                                         #inicializando o pygame
white = (255, 255, 255)                                                #declação das cores      
black = (0, 0, 0)
green = (50,205,50)

dis_width = 600                                                        #tamanho do display
dis_height = 600
 
dis = pygame.display.set_mode((dis_width, dis_height))  
pygame.display.set_caption('OLHA A COBRA hehehehe :)')                              #nome da janela
 
clock = pygame.time.Clock()
 
snake_block = 10
snake_speed = 15
 
def our_snake(snake_block, snake_list):                                 #criando a função da cração das cobras
    for x in snake_list:
        pygame.draw.rect(dis, green, [x[0], x[1], snake_block, snake_block])
 
def gameLoop():                                     #iniciando o loop
    game_over = False
    game_close = False
 
    x1 = dis_width / 2                              #posição inicial no centro da tela
    y1 = dis_height / 2
 
    x1_change = 0                                   #o atual eperando alguma coisa inicializar
    y1_change = 0
 
    snake_List = []
    Length_of_snake = 1
 
    foodx = round(random.randrange(0, dis_width - snake_block) / 10.0) * 10.0   #criando comida aleatoria
    foody = round(random.randrange(0, dis_height - snake_block) / 10.0) * 10.0 
 
    while not game_over:
        while game_close == True:           #so ira funcionar caso vc ultrapase hehehehe
            dis.fill(black)
            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_ESCAPE:
                        game_over = True
                        game_close = True
                        pygame.quit()
                        quit()

        for event in pygame.event.get():    #parte do hogo de verdade
            print(event)
            if event.type == pygame.QUIT:
                game_over = True
                game_close = True
                pygame.quit()
                quit()
            if event.type == pygame.KEYDOWN:    #movimetação com as teclas
                if event.key == pygame.K_LEFT:
                    x1_change = -snake_block
                    y1_change = 0
                elif event.key == pygame.K_RIGHT:
                    x1_change = snake_block
                    y1_change = 0
                elif event.key == pygame.K_UP:
                    y1_change = -snake_block
                    x1_change = 0
                elif event.key == pygame.K_DOWN:
                    y1_change = snake_block
                    x1_change = 0
                elif event.key == pygame.K_ESCAPE:  #esc reinicia o jogo
                    game_over = True
                    game_close = True
 
        if x1 >= dis_width or x1 < 0 or y1 >= dis_height or y1 < 0:#se bater entrar na tela preta
            game_close = True
            game_close = True
            pygame.quit()
            quit()
        x1 += x1_change #apos o comando feito ira receber a novas cordenadas
        y1 += y1_change
        dis.fill(black)
        pygame.draw.rect(dis, white, [foodx, foody, snake_block, snake_block])
        snake_Head = []             #cria a cauda da cobra
        snake_Head.append(x1)
        snake_Head.append(y1)
        snake_List.append(snake_Head)
        if len(snake_List) > Length_of_snake:
            del snake_List[0]
 
        for x in snake_List[:-1]:   
            if x == snake_Head:
                game_close = True
 
        our_snake(snake_block, snake_List) 
        pygame.display.update()
 
        if x1 == foodx and y1 == foody:         #aqui abresenta mais um quadrado caso a comida seja comida
            foodx = round(random.randrange(0, dis_width - snake_block) / 10.0) * 10.0
            foody = round(random.randrange(0, dis_height - snake_block) / 10.0) * 10.0
            Length_of_snake += 1
 
        clock.tick(snake_speed)
    gameLoop()
    pygame.quit()
    quit()

gameLoop()