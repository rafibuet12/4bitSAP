main()
{
	read X;
	store X in RAM;
	store 5 in #30; //address 30H

	call compare();
	OUT;
}

compare()
{
	if (X=5) call add();
	else call logical();
}

add()
{
	X=X+[30];
}

logical()
{
	X= X logicalOP [30];		//for our case, logicalOP= OR
}