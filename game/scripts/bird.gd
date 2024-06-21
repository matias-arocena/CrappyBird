extends CharacterBody3D

func _ready() -> void:
	$"%CrappyMovementComponent".set_character_body(self)

func _physics_process(delta: float) -> void:
	$"%CrappyMovementComponent".physics_process(delta)
	
func _input(event: InputEvent) -> void:
	if (event.is_action_pressed("ui_up")):
		$"%CrappyMovementComponent".jump()
