import turtle

wn=turtle.Screen()
wn.title("Snake Game")
wn.bgcolor("green")
wn.setup(width=650,height=650)
wn.tracer(0)
head=turtle.Turtle()
head.speed(0)
head.shape("circle")
head.color("blue")
head.penup()
head.goto(0,0)
head.direction="stop"


while True:
    wn.update()




wn.mainloop()