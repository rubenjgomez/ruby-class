require 'minitest/autorun'
class TestCashRegister < Minitest::Unit::TestCase


def setup 
@register = CashRegister.new
end

def test_default_is_zero
assert_equal 0, @register.total
end

def test_total_calculation
@register.scan 1
@register.scan 2
assert_equal 3, @register.total 
end
end


class CashRegister 
def initialize
@total = 0
end

def total
@total 
end

def scan scan_one
@total = @total + scan_one 
end
end

