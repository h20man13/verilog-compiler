# EDE Verilog Subset Grammar

<source_text> ::= <module>

<module> ::= <name_of_module> <list_of_ports> <module_item> <endmodule>

<list_of_ports> ::= <port> <list_of_ports_expand>


<list_of_ports_expand> ::= : NULL 
								  | , <port> <list_of_ports_expand>

<module_item> ::= <module_item_expanded>


<module_item_expanded> ::= : NULL 
								 | , <mod_item> <module_item_expanded>


<name_of_module> ::= IDENTIFIER


<port> ::= : <port_expression> 
           | . <name_of_port> ( <port_expression> )

           
<port_expression> ::= : <port_reference> 
						   | { <port_reference> <port_reference_expanded> }
						   
						   
<port_reference_expanded> ::= , <port_reference> <port_reference_expanded>

<port_reference> ::= : <name_of_variable> 
                     | <name_of_variable> [ <constant_expression> ] 
                     | <name_of_variable> [ <constant_expression> : <constant_expression>]
                     
 
<name_of_port> ::= IDENTIFIER

<mod_item> ::= : <input_declaration> 
				  | <output_declaration> 
				  | <net_declaration>
				  | <reg_declaration>
				  | <integer_declaration> 
				  | <real_declaration>
				  | <gate_declaration>
				  | <module_instantiation> 
				  | <continuous_assign>
				  | <initial_statement> 
				  | <always_statement>
				  | <task>
				  | <function>

# Declarations

<input_declaration> ::= INPUT <range> <list_of_variables> ;

<p>output_declaration ::= OUTPUT <range> <list_of_variables> ;
<p>net_declaration ::= WIRE <range> <delay> <list_of_variables> ;
<p>reg_declaration ::= REG <range> <list_of_register_variables> ;
<p>real_declaration ::= REAL <list_of_variables> ;
<p>integer_declaration ::= INTEGER <list_of_variables> ;
<p>continious_assign ::= ASSIGN <delay> <list_of_assignments> ;

<list_of_variables> ::= : <name_of_variable> <name_of_variable_expaned> 
							  | WIRE <range> <delay> <list_of_assignments> ;
							  
<name_of_variable_expanded> ::= : NULL 
										| , <name_of_variable> <name_of_variable_expanded>
										 
<name_of_variable> ::= IDENTIFIER

<list_of_register_variables> ::= <register_variable> <register_variable_expanded>

<register_variable_expanded> ::= , <register_variable> <register_variable_expanded>

<register_variable> ::= : <name_of_register> 
                        | <name_of_memory> [ <constant_expression> : <constant_expression> ]
                        
<name_of_register> ::= IDENTIFIER
<name_of_memory> ::= IDENTIFIER

<range> ::= [ <constant_expression> : <constant_expression> ]

<list_of_assignments> ::= <assignment> <assignment_expanded>

<assignment_expanded> ::= : NULL 
								| , <assignment> <assignment_expanded>

# Primative Instances

<gate_declaration> ::= GATETYPE <delay> <gate_instance> <gate_instance_expanded> ;</p>

<gate_instance_expanded> ::= : NULL 
									| , <gate_instance> <gate_instance_expanded>

<gate_instance> ::= <name_of_gate_instance> ( <terminal> <terminal_expanded> )

<name_of_gate_instance> ::= IDENTIFIER <range>

<terminal_expanded> ::= : NULL 
							 | , <terminal> <terminal_expanded>
							 
<terminal> ::= : <expression> 
				  | IDENTIFIER

# Module Instantiations

<module_instantiation> ::= <name_of_module>  <module_instance> <module_instance_expanded> ;

<module_instance_expanded> ::= : NULL 
									  | , <module_instance> <module_instance_expanded>

<name_of_module> ::= IDENTIFIER

<module_instance> ::= <name_of_instance> ( <list_of_module_connections> )

<list_of_module_connections> ::= : <module_port_connection> <module_port_connections_expanded> 
										 | <named_port_connection> <named_port_connection_expanded>


<module_port_connections_expanded> ::= , <module_port_connection> <module_port_connections_expanded>

<named_port_connection> ::= : <expression> 
								  | NULL

NULL ::= /* nothing ex (a, b, , d) */

<named_port_connection> ::= . IDENTIFIER ( <expression> )


# Behavorial Statements

<initial_statement> ::= INITIAL statement
<always_statement> ::= ALWAYS statement

<statement_or_null> ::= statement | NULL ;

<statement> ::= : <blocking_assignment> ; 
				   	| <non_blocking_assignment> ; 
					| IF ( <expression> ) <statement_or_null> 
				  	| IF ( <expression> ) <statement_or_null> ELSE <statement_or_null> 
				  	| CASE ( <expression> ) <case_item> <case_item_expanded> ENDCASE 
				  	| CASEX ( <expression> ) <case_item> <case_item_expanded> ENDCASE 
				  	| CASEZ ( <expression> ) <case_item> <case_item_expanded> ENDCASE 
				  	| FOREVER <statement> 
				  	| repeat ( <expression> ) <statement> 
				  	| while ( <expression> ) <statement> 
				  	| for ( <assignment> ; <expression> ; <assignment> ) <statement> 
				  	| wait ( <expression> ) <statement_or_null> 
				  	| <seq_block> 
				  	| <task_enable> 
				  	| <system_task_enable> 
				  	| ASSIGN <assignment>
				  	
				  	

<assignment> ::= <lvalue> = <expression>

<blocking_assignment> ::= <lvalue> = <expression>

<nonblocking_assignment> ::= <lvalue> <= <expression>

<case_item> ::= <expression> <expression_expanded> : <statement_or_null> | default : <statement_or_null> | <default statement_or_null>

<seq_block> ::= : BEGIN <statement_list> END  
					| BEGIN : <name_of_block> <block_declaration_list> <statement_list> END
					
<statement_list> ::= : <NULL> 
						  | <statement> <statement_list>
						  
<name_of_block> ::= IDENTIFIER

<block_declaration_list> ::= : <block_declaration> <block_declaration_list> 
									| NULL
									
<block_declaration> ::= : <reg_declaration> 
							 | <integer_declaration> 
							 | <real_declaration>
							 


<task_enable> ::= : <name_of_task> 
					  | <name_of_task> ( <expression> <expression_expanded> ) ;

<expression_expanded> ::= , <expression> <expression_expanded> || NULL


<system_task_enable> ::= : <name_of_system_task> ; 
                         | <name_of_system_task> ( <expression> <expression_expanded> ) ;
							   

<name_of_system_task> ::= $ <system_identifier>

<system_identifier> ::= IDENTIFIER

# Expressions

<lvalue> -> : IDENTIFIER 
            | IDENTIFIER [ <expression> ] 
            | IDENTIFIER [ <expression> : <expression> ] 
            | <concatenation>
            

<constant_expression> ::= <expression>

<expression> ::= : <primary> 
                 | <UNARY_OPERATOR> <primary> 
                 | <expression> <BINARY_OPERATOR> <expression> 
                 | <expression> ? <expression> : <expression> 
                 | STRING
                 

<UNARY_OPERATOR> ::=  : PLUS 
                      | MINUS 
                      | NOT 
                      | BAND 
                      | BNAND 
                      | BOR 
                      | BXOR 
                      | BNXOR
                      
                      
                      
<BINARY_OPERATOR> ::= : PLUS 
                      | MINUS 
                      | TIMES 
                      | DIV 
                      | MOD 
                      | EQ2 
                      | EQ3 
                      | NE2 
                      | NE3 
                      | LAND 
                      | LOR 
                      | LT 
                      | LE 
                      | GT 
                      | GE 
                      | BAND 
                      | BOR 
                      | BXOR 
                      | BXNOR 
                      | LSHIFT 
                      | RSHIFT
                      
                      
                      
<STRING> ::= "data in here"


<primary> ::= : NUMBER
              | IDENTIFIER 
              | IDENTIFIER [ <expression> ] 
              | IDENTIFIER [ <constant_expression> : <constant_expression> ] 
              | <concatenation> 
              | <multiple_concatenation> 
              | <function_call> 
              | ( <expression> )

<concatenation> ::= { <expression> <expression_expanded> }

<multiple_concatenation> ::= { <expression> { <expression> <expression_expanded> } }

<function_call> ::= : <name_of_function> ( <expression> <expression_expanded> ) 
                    | <name_of_system_function> ( <expression> <expression_expanded> ) 
                    | name_of_system_function
                    
<name_of_function> ::= IDENTIFIER

<name_of_system_function> ::= $ IDENTIFIER

# General

<delay> ::= : # NUMBER 
            | # IDENTIFIER


