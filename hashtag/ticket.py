import pandas as pd

# importar base de dados

tab_vendas = pd.read_excel('Vendas.xlsx')

# ticket medio por produto

tab = tab_vendas[['ID Loja', 'Valor Final', 'Quantidade']].groupby('ID Loja').sum()

ticket = (tab['Valor Final'] / tab['Quantidade']).to_frame()
print(ticket)