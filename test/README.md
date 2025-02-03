# printfTester (2019+)
Testador do projeto ft_printf da escola 42 (com verificação de vazamentos personalizada no mac, usando valgrind no linux)  
Clone este testador em seu repositório ft printf. (funciona em Linux e Mac, sem testes de comportamento indefinido, lida com timeout e sigsegv)  

# Comandos
make m = lançar testes obrigatórios   
make b = testes de bônus   
make a = lançar testes obrigatórios + testes bônus  
make [category] = lançar categoria associada ex: make s  
make [category] [test number] = lançar teste associado na categoria ex: make s 42  

make dockerm = lançar testes obrigatórios no contêiner Linux  
make dockerb = lançar testes de bônus no contêiner Linux  
make dockera = lançar testes obrigatórios + testes bônus no contêiner Linux  
make docker[category] = lançar categoria associada ex: make dockers    
make docker[category] [test number] = lançar teste associado na categoria ex: make dockers 42   
