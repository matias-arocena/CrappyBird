extends Node2D

func _ready() -> void:
	var c = CrappyBird.new()
	c.add(10)
	c.add(20)
	c.add(30)
	print(c.get_total())
	c.reset()
	
	var c2 = CrappyMovement.new()
	c2.add(30)
	c2.add(60)
	print(c2.get_total())
	
