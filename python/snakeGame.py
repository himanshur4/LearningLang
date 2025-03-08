import pygame
import random

pygame.init()

width, height = 800, 600

white = (255, 255, 255)
green_background = (34, 139, 34)
red = (213, 50, 80)
snake_block = 20 
food_size = 20    
snake_speed = 10
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game - Green Background")
clock = pygame.time.Clock()
font_style = pygame.font.SysFont("bahnschrift", 30)
score_font = pygame.font.SysFont("comicsansms", 35)

def display_score(score):
    """Display the player's score."""
    value = score_font.render(f"Score: {score}", True, white)
    screen.blit(value, [10, 10])

def draw_snake(snake_block, snake_list):
    """Draw the snake on the screen."""
    for segment in snake_list:
        pygame.draw.rect(screen, white, [segment[0], segment[1], snake_block, snake_block], border_radius=5)

def draw_food(x, y):
    """Draw the food on the screen."""
    pygame.draw.ellipse(screen, red, [x, y, food_size, food_size])

def display_message(msg, color):
    """Display a message on the screen."""
    mesg = font_style.render(msg, True, color)
    screen.blit(mesg, [width / 6, height / 3])

def game_loop():
    """Main game loop."""
    game_over = False
    game_close = False

    x1, y1 = width / 2, height / 2
    x1_change, y1_change = 0, 0


    snake_list = []
    length_of_snake = 1


    foodx = random.randint(0, (width - food_size) // snake_block) * snake_block
    foody = random.randint(0, (height - food_size) // snake_block) * snake_block

    while not game_over:

        while game_close:
            screen.fill(green_background)
            display_message("Game Over! Press Q-Quit or C-Play Again", white)
            display_score(length_of_snake - 1)
            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        game_loop()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT and x1_change == 0:
                    x1_change, y1_change = -snake_block, 0
                elif event.key == pygame.K_RIGHT and x1_change == 0:
                    x1_change, y1_change = snake_block, 0
                elif event.key == pygame.K_UP and y1_change == 0:
                    x1_change, y1_change = 0, -snake_block
                elif event.key == pygame.K_DOWN and y1_change == 0:
                    x1_change, y1_change = 0, snake_block

        if x1 >= width or x1 < 0 or y1 >= height or y1 < 0:
            game_close = True

        x1 += x1_change
        y1 += y1_change
        screen.fill(green_background)

        draw_food(foodx, foody)

        snake_head = [x1, y1]
        snake_list.append(snake_head)
        if len(snake_list) > length_of_snake:
            del snake_list[0]

        for segment in snake_list[:-1]:
            if segment == snake_head:
                game_close = True

        draw_snake(snake_block, snake_list)
        display_score(length_of_snake - 1)
        pygame.display.update()

        if x1 == foodx and y1 == foody:
            foodx = random.randint(0, (width - food_size) // snake_block) * snake_block
            foody = random.randint(0, (height - food_size) // snake_block) * snake_block
            length_of_snake += 1

        clock.tick(snake_speed)

    pygame.quit()
    quit()

game_loop() 