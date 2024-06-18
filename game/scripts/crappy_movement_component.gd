extends CrappyMovementComponent

@export
var character_body: CharacterBody3D

func _ready() -> void:
	set_character_body(character_body)
