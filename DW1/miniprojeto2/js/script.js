/* Setup */

function setup(id) {
	if (id == "calc-page") {
		/* Para cada botão, adciona um listener para o evento click
		que realiza a operação adequada da calculadora. */
		document.querySelectorAll('input[type="button"').forEach(
			function(button) {
				button.addEventListener('click', function() {
					calcOperation(this.name);
				})
			});
	}
	else if (id == "courses-page") {
		/* Para cada <option>, adciona um listener para o evento dblclick
		que move o elemento para o outro <select>, com posição baseada
		nos elementos presentes na lista alvo. */
			document.querySelectorAll('option').forEach(
				function(option) {
				option.addEventListener('dblclick', function() {
					var targetId = this.parentNode.id == "list-available" ?
					"list-chosen" : "list-available";
					target = document.getElementById(targetId);
					target.insertBefore(this, getNextSibling(this, target));
				});
			});
		}
	else if (id == "table-page") {
		/* Adciona um listener no botão Exportar para escrever o
		CSV na <textarea>. */
		document.querySelector('input[type="button"]').addEventListener(
			'click', function(button) {
				document.querySelector('textarea').value = 
				tableToCSV(document.querySelector('table'));
			});
	}
}

/* Funções da Página Calculadora */

/* Lê os inputs da calculadora. */
function getCalcInputs() {
	return [document.getElementById('calc-n1').value,
	document.getElementById('calc-n2').value];
}

/* Realiza a operação correta ou alerta o usuário em caso de erro. */
function calcOperation(op) {
	/* Transforma os inputs em inteiros. */
	var inputs = getCalcInputs().map(num => parseInt(num, 10));
	var result;

	/* Se algum deles não for numérico, alerta o usuário. */
	if (inputs.some(isNaN)) {
		alert('Insira 2 números.');
		return;
	}

	/* Realiza a operação e armazena o resultado. */
	switch (op) {
		case 'add':
		result = inputs[0] + inputs[1];
		break;
		case 'sub':
		result = inputs[0] - inputs[1];
		break;
		case 'mul':
		result = inputs[0] * inputs[1];
		break;
		case 'div':
		/* Mostra um erro caso o usuário tente dividir por zero. */
		if (inputs[1] == 0) {
			result = 'Erro: Divisão por zero.';
		}
		else {
			result = inputs[0] / inputs[1];
		}
		break;
		default:
		result = 'Erro.';
	}

	/* Mostra o resultado. */
	document.getElementById('calc-result').value = result;
}

/* Funções da Página Cursos */

/* Encontra o elemento seguinte ao elemento a ser inserido no <select> */
function getNextSibling(opt, container) {
	var siblings = Array.from(container.options);
	/* Retorna o primeiro elemento com data-order >= ao do elemento
	em questão, ou undefined se não existir. */
	return siblings.find(sib => 
		sib.getAttribute('data-order') >= opt.getAttribute('data-order'));
}

/* Funções da Página Tabela */

/* Gera uma string com o formato CSV a partir de uma <table> */
function tableToCSV(table) {
	var csv = "";
	
	/* Caracteres que precisam de tratamento especial. */
	var mustEscapeCharacters = ['"', '\r', '\n', ';'];

	/* Para cada linha da tabela: */
	var rows = Array.from(table.rows);
	for (var r = 0; r < rows.length; r++) {
		/* Para cada célula: */
		var cells = Array.from(rows[r].cells);
		for (var c = 0; c < cells.length; c++) {
			/* Lê o conteúdo da célula. */
			var text = cells[c].innerText;
			
			/* Verifica se contém caracteres especiais. */ 
			var mustEscape = mustEscapeCharacters.some(
				function (c) {
					return text.includes(c);
				});

			/* Se contiver, trata o campo com double-quotes. */
			if (mustEscape) {
				console.log(text);
				text = text.replace(/"/g, '""');
				text = '"'.concat(text, '"');
			}

			/* Concatena o campo na string resultado. */
			csv += text;
			/* Separador de campos. */
			if (c < cells.length - 1) {
				csv += ";";
			}
		}
		/* Separador de linhas. */
		if (r < rows.length - 1) {
			csv += "\r\n";
		}
	}
	return csv;
}


/* Roda o setup correto para a página atual. */
setup(document.querySelector('body').id);