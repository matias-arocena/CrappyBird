extends Node3D


func _ready() -> void:
	$"%CrappyMovementComponent".set_character_body($"%CharacterBody3D")
