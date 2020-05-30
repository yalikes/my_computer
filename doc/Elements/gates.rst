Gate
=====

Gate 提供了输入输出端口。
当有向Gate提供输入时. 对应的Gate的set_port_value()被调用
提供输入后，为了模拟物理世界中的Gate的switch time.
set_port_value()并不直接修改port的值，而是创建一个Event对象，
添加到全局的Event队列中去。(如果有必要这么做的话)。
