#include "raylib.h"
#include "structs.h"
#include "InputChecks.h"
#include <stdbool.h>



Vector2 Movement_Checks()
{
	Vector2 MovementDirection = { 0, 0 };
	if (IsKeyDown(KEY_W)) { MovementDirection.y -= 4; }
	if (IsKeyDown(KEY_A)) { MovementDirection.x -= 4; }
	if (IsKeyDown(KEY_S)) { MovementDirection.y += 4; }
	if (IsKeyDown(KEY_D)) { MovementDirection.x += 4; }

	//TraceLog(5, TextFormat("%d", MovementDirection));
	
	return MovementDirection;
}

int Attack_Checks()
{
	int AttackType = 0;
	if (IsKeyPressed(KEY_UP)) { AttackType = 1; }
}