const orderTotal = (order) => {
  return order.items.reduce((prev, cur) => cur.price * (cur.quantity || 1) + prev, 0);
};

if (
  orderTotal({
    items: [{ name: 'Dragon candy', price: 2, quantity: 3 }],
  }) !== 6
) {
  throw new Error('Check fail: Quantity');
}


if (
    orderTotal({
      items: [{ name: 'Dragon candy', price: 3 }],
    }) !== 3
  ) {
    throw new Error('Check fail: No quantity specified');
  }
  


if (
  orderTotal({
    items: [
      { name: 'Dragon food', price: 8 },
      { name: 'Dragon cage (small)', price: 800 },
    ],
  }) !== 808
) {
  throw new Error('Check Fail: Sad path (Example 1)');
}

if (
  orderTotal({
    items: [
      { name: 'Dragon collar', price: 20 },
      { name: 'Dragon chew toy', price: 40 },
    ],
  }) !== 60
) {
  throw new Error('Check Fail: sad path (Example 2)');
}
