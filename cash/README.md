# cash-cs50
Harvard CS50 Challenge

Implemente, em um arquivo chamado cash.c, um programa que primeiro pergunta ao usuário quanto dinheiro é devido e depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.

Use get_float para obter a entrada do usuário e printf para gerar sua resposta. Suponha que as únicas moedas disponíveis sejam de 25, 10, 5 e 1 centavo(s). Se o usuário não fornecer um valor não negativo, seu programa deve solicitar novamente ao usuário uma quantia válida até que o usuário concorde.

Para que possamos automatizar alguns testes do seu código, certifique-se de que a última linha de outpt do seu programa seja apenas o número mínimo de moedas possível: um inteiro seguido por \n.

Tome cuidado para arredondar seus centavos até o último centavo mais próximo, por exemplo usando o round, que é declarado na math.h.
